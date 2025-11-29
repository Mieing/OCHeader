@class BDXBridgeEventSubscriber;

@interface AWECustomerServicePortalReportManager : NSObject

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;

+ (id)sharedInstance;

- (void)uploadAlogWithScene:(id)a0;
- (void)updateReplayWithScene:(id)a0;
- (BOOL)enableUploadReplayWhenFeedback;
- (void).cxx_destruct;
- (void)setup;

@end
