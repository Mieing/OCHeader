@class NSMutableArray;
@protocol YataInstanceInterface;

@interface IESECCollectStashedEventsHelper : NSObject

@property (retain, nonatomic) id<YataInstanceInterface> yataInstance;
@property (retain, nonatomic) NSMutableArray *stashedEvents;

- (id)initWithYataInstance:(id)a0;
- (void)triggerEventWithOpportunity:(id)a0;
- (BOOL)containsOpportunity:(id)a0;
- (void)stashEvent:(id)a0;
- (id)p_findEventsByOpportunity:(id)a0;
- (void).cxx_destruct;

@end
