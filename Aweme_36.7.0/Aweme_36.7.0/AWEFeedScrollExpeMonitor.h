@class NSObject, AWEFeedScrollingTimeCostModel, AWEFeedConfigureTimeCostModel;
@protocol OS_dispatch_queue;

@interface AWEFeedScrollExpeMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isEnabled;
}

@property (readonly, nonatomic) AWEFeedScrollingTimeCostModel *scrollingModel;
@property (readonly, nonatomic) AWEFeedConfigureTimeCostModel *configureModel;

+ (id)sharedMonitor;

- (void)_reportScrollingTimeCost:(id)a0;
- (void)_reportCellConfigTimeCost:(id)a0;
- (void).cxx_destruct;
- (void)report;
- (id)init;
- (void)_reset;
- (BOOL)_reportEnabled;

@end
