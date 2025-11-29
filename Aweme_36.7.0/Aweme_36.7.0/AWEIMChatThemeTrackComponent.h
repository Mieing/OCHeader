@class NSString;

@interface AWEIMChatThemeTrackComponent : AWEIMComponentBase <AWEIMMessageListDataAction>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)didReceiveNewMessage:(id)a0 reason:(long long)a1;
- (void)didManuallySetChatTheme;
- (void)delayReportBackground:(long long)a0;
- (void)reportBackground:(long long)a0;
- (id)getReportParams:(long long)a0;
- (void)dealloc;

@end
