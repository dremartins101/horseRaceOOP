# horseRaceOOP


## UML

````mermaid
classDiagram

class horse{
    position:int
    index:int
    trackLength:int
    Horse()
    init(int index, int trackLength)
    advance()
    printLane()
    isWinner() bool
}

class Race{
    TRACK_LENGTH:int
    NUM_HORSES:int
    Horse horses [HORSE_NUM]
    Race()
    advance()
}
``` 

## Race()

```
in header
    set const static INT num_HORSES to 5
    set constant int TRACK_LENGTH to 14
in constructor
    go through each horse
    initialize that horse by calling it's init
```

## Race.start()
```
set bool keepGoing to true
while keepGoing:
    for each horse:
        advance that horse
        print horse lane
        if horse wins:
            set keepGoing to false
```

## Horse::Horse()
```
    set position to 0
    set index to 0
    set track_length to 15
```

## Horse:init(int index, int trackLength){
```
    my index = index
    my trackLength = tracklength
    my position = 0
```

## Horse::advance()
``` 
    roll a random 0-1 int called coin
    add coin to position
```

## Horse::printLane()
```
    for pos from 0 to track length:
        if pos == my position:
            print index
        otherwise:
            print "."
     print newLine
```

## bool Horse::isWInner
    bool result = false
    if position >= trackLength
        result = true
        print some winning commentary
    return result
```
