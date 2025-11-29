@class NSString;

@interface AWEIMMessageTabFriendConversationBannerComponent : AWEIMMessageTabCommonBannerComponent <AWEIMMessageTabFriendConversationBannerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void)updateBanner;
- (id)friendConversationBannerInteractor;
- (Class)interactorClass;
- (void)viewWillAppear;
- (void)dismissBannerView;

@end
