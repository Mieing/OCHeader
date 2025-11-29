@class AWEConcernFansToolUserInfo, AWEConcernFansToolNoticeViewModel, NSString, AWEConcernFansToolAfterPostController, NSMutableArray;

@interface AWEConcernFansToolManager : NSObject <AWEUserMessage, AWEConcernFansToolManagerProtocol>

@property (nonatomic) BOOL isLogin;
@property (retain, nonatomic) AWEConcernFansToolAfterPostController *noticeController;
@property (retain, nonatomic) AWEConcernFansToolUserInfo *userInfo;
@property (retain, nonatomic) NSMutableArray *subscribeList;
@property (retain, nonatomic) AWEConcernFansToolNoticeViewModel *noticeViewModel;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)_aweLazyRegisterLoad;
+ (id)sharedInstance;

- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (void)trackEvent:(id)a0 logExtraDict:(id)a1 referString:(id)a2;
- (void)__unregisterSubscriber;
- (void)enterFansTool:(long long)a0 extraLog:(id)a1;
- (void)showNoticeViewWithAwemeModel:(id)a0;
- (void)enterFansTool:(long long)a0;
- (void)removeNewUserYellowDot:(long long)a0;
- (BOOL)canShowYellowDot:(long long)a0;
- (void)__registEvents;
- (void)__publishToFansTool;
- (void)__subscribeEvent:(id)a0 withCallback:(id /* block */)a1;
- (id)__profileExtensionAreaShownCardList;
- (BOOL)canShowFansTool;
- (BOOL)canShowShareEntry:(id)a0;
- (BOOL)__allowVideoType:(id)a0;
- (void)showedShareTooltips;
- (void)enterFansTool:(long long)a0 schema:(id)a1 extraLog:(id)a2;
- (id)__enterFrom:(long long)a0;
- (id)__enterMethod:(long long)a0;
- (BOOL)canShowNoticeAfterPost:(id)a0;
- (BOOL)canShowShareTooltips:(id)a0 enterFrom:(id)a1 awemeModel:(id)a2;
- (Class)fansToolProfileEntryClass;
- (Class)newFansToolProfileEntryClass;
- (void)trackShowFansToolEntry:(long long)a0 extraLog:(id)a1;
- (BOOL)canRequestNoticeViewDataBeforePost:(id)a0;
- (void)fetchFansToolNoticeViewModel;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
