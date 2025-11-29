@class NSString;

@interface YYGInAppNotificationView : DUXInAppNotificationView <DUXInAppNotificationViewDelegate>

@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *schema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)notificationDidShow:(id)a0;
- (void)notificationDidTapInteractiveComponent:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameters:(id)a0;
- (void)show;

@end
