@class IESLiveComponentLoadOptimezer, NSMutableDictionary, NSString, IESLiveState, IESLiveStateTransition, NSMutableArray;
@protocol IESLiveBootableModel;

@interface IESLiveStateMachine : NSObject

@property (retain, nonatomic) NSMutableDictionary *stateNodes;
@property (retain, nonatomic) NSMutableDictionary *stateLines;
@property (retain, nonatomic) IESLiveState *currentState;
@property (retain, nonatomic) IESLiveStateTransition *latestTransition;
@property (nonatomic, getter=isActive) BOOL actived;
@property (retain, nonatomic) NSMutableArray *eventQueue;
@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) IESLiveState *initialState;
@property (retain, nonatomic) IESLiveState *finalState;
@property (copy, nonatomic) id /* block */ resetBlock;
@property (copy, nonatomic) id /* block */ atEndBlock;
@property (weak, nonatomic) id<IESLiveBootableModel> room;
@property (copy, nonatomic) NSString *label;
@property (weak, nonatomic) IESLiveComponentLoadOptimezer *loadOptimezer;
@property (nonatomic) long long loadLevel;
@property (readonly, nonatomic) BOOL atEnd;
@property (readonly, nonatomic) BOOL makeFirstStep;
@property (readonly, nonatomic) BOOL makeFinalStep;
@property (nonatomic) BOOL discardEventThatCanNotFire;

- (BOOL)fireEventNamed:(id)a0;
- (void)p_initializeInitState;
- (BOOL)p_canFireEvent:(id)a0;
- (void)p_checkEventQueue:(id)a0;
- (id)p_greedyEventPrefixSequence:(id)a0;
- (BOOL)canFireEventNamed:(id)a0;
- (void)addEvents:(id)a0;
- (void)active;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)addEvent:(id)a0;
- (void)reset;
- (void)addState:(id)a0;
- (void)dealloc;
- (void)addStates:(id)a0;
- (BOOL)fireEvent:(id)a0;

@end
