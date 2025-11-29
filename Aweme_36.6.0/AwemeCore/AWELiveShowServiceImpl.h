@class NSString;

@interface AWELiveShowServiceImpl : NSObject <IESLiveShowService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)jumpToVideoHasPaidPageWithPaidScene:(long long)a0;
- (void)liveHasPaidShowSnackBarToastWithPaidScene:(long long)a0;

@end
