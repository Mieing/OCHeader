@class AWEGoodsDetailPageContext;
@protocol AWEGDContainerTrackerProtocol;

@interface AWEGDTimeTracker : NSObject

@property (nonatomic) long long stayTime;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;
@property (weak, nonatomic) id<AWEGDContainerTrackerProtocol> trackerProvider;

- (void)stopTrackerForKey:(id)a0;
- (void)executeTracker;
- (void)startTrackerForKey:(id)a0;
- (id)initWithContext:(id)a0 trackerProvider:(id)a1;
- (void).cxx_destruct;

@end
