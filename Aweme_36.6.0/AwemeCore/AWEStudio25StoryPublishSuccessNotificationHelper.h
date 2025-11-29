@class NSDictionary, NSString;

@interface AWEStudio25StoryPublishSuccessNotificationHelper : NSObject <AWEPublishTaskMessage, DUXInAppNotificationViewDelegate>

@property (retain, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) id /* block */ canShowNotificationCardBlock;
@property (nonatomic) long long toastType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)notificationDidDismiss:(id)a0;
- (void)notificationDidTapInteractiveComponent:(id)a0;
- (void)showInAppDuxNotificationWithTask:(id)a0;
- (BOOL)hasOpenStory25Feed;
- (void)showDefaultToast;
- (void)trackSocialPushNoticeBarWithParams:(id)a0 isClick:(BOOL)a1;
- (void)transferToStoryFeed;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
