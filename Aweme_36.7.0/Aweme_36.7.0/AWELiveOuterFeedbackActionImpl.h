@class NSString;

@interface AWELiveOuterFeedbackActionImpl : NSObject <IESLiveOuterFeedbackAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onFeedbackStateChange:(long long)a0 toastInfo:(id)a1;

@end
