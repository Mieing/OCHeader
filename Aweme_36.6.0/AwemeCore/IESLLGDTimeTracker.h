@class IESLLGoodsDetailPageContext;
@protocol IESLLGDContainerTrackerProtocol;

@interface IESLLGDTimeTracker : NSObject

@property (nonatomic) long long stayTime;
@property (weak, nonatomic) IESLLGoodsDetailPageContext *context;
@property (weak, nonatomic) id<IESLLGDContainerTrackerProtocol> trackerProvider;

- (void)stopTrackerForKey:(id)a0;
- (void)executeTracker;
- (void)startTrackerForKey:(id)a0;
- (id)initWithContext:(id)a0 trackerProvider:(id)a1;
- (void).cxx_destruct;

@end
