@class NSString;

@interface AWEGCPDataConnectionWidget : IESGCPBaseWidget <AWEGCPVideoContainerActions, AWEUserMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)widgetShouldBeActivatedWithDIContext:(id)a0;

- (void)didReceiveFollowUserResponse:(id)a0 context:(id)a1 error:(id)a2;
- (void)removeNotification;
- (void)registNotification;
- (void)beforeResetVideoContainer:(id)a0;
- (void)handleDigg:(id)a0;
- (void)handleShare:(id)a0;
- (id)transformToConnectionModelFromAwemeModel:(id)a0 action:(unsigned long long)a1;
- (void)handleWatchDuration;
- (void)widgetDidCreate;
- (void)widgetWillDestroy;
- (void)handleComment:(id)a0;

@end
