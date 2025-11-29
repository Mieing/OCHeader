@class NSMutableDictionary;

@interface FantaFeatureSequenceItemState : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventContainer;

- (BOOL)stateForEvent:(id)a0;
- (void)setState:(BOOL)a0 forEvent:(id)a1;
- (void).cxx_destruct;

@end
