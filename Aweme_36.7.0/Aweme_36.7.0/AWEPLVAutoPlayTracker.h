@class NSDictionary, NSString;

@interface AWEPLVAutoPlayTracker : NSObject <AWEVideoHallTrackerProtocol>

@property (copy, nonatomic) NSDictionary *commonTrackParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackFavouriteVideo:(id)a0 isCancel:(BOOL)a1;
- (void)trackVideoPlayFinishWithLogExtraDict:(id)a0;
- (void)trackFinishViewShowWithModel:(id)a0;
- (void)trackFinishPaymentTrialEndWithModel:(id)a0;
- (void).cxx_destruct;

@end
