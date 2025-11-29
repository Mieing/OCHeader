@class NSString;
@protocol AWEPublishPrivacySettingHandlerProtocol, AWEPublishPrivacySettingChangeInfoProtocol, AWEPostPageContext;

@interface AWEPostPagePrivacyHandler : NSObject <AWEPublishPrivacySettingSubscriber, AWEPostPagePrivacyService>

@property (weak, nonatomic) id<AWEPublishPrivacySettingHandlerProtocol> privacyHandler;
@property (retain, nonatomic) id<AWEPublishPrivacySettingChangeInfoProtocol> privacyChangeInfo;
@property (nonatomic) BOOL isPrivacyViewShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<AWEPostPageContext> context;

+ (void)_aweLazyRegisterPostPage;

- (void)bindServices:(id)a0;
- (void)publishPrivacySettingHandler:(id)a0 didChangeWithInfo:(id)a1;
- (void)didSelectPrivacy;
- (void)refreshPrivacyHandler;
- (void).cxx_destruct;

@end
