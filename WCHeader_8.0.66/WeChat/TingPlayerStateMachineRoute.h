@class NSArray;

@interface TingPlayerStateMachineRoute : NSObject

@property (nonatomic) int source;
@property (nonatomic) int destination;
@property (retain, nonatomic) NSArray *events;

- (id)initWithSource:(int)a0 destination:(int)a1 event:(id)a2;
- (void).cxx_destruct;

@end
