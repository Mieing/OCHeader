@class NSString, NSSet, UINavigationController;

@interface AWEIMMediaDisplayUtils : NSObject <AWEIMMediaDisplayUtilsInterface>

@property (class, copy, nonatomic) NSString *enterFromString;

@property (copy, nonatomic) NSSet *extraCheckedMessageTypeSet;
@property (nonatomic) BOOL isEnterByQuoteContent;
@property (weak, nonatomic) UINavigationController *specifyNaviVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldHideIMBottomBar:(id)a0;
+ (void)showCollapseMediaController:(id)a0 inMessageListVC:(id)a1 extraParams:(id)a2 requestScene:(id)a3 completion:(id /* block */)a4;
+ (void)showCollapseMediaController:(id)a0 inMessageListVC:(id)a1 shouldShowComment:(BOOL)a2 requestScene:(id)a3;
+ (void)getMediaController:(id)a0 inMessageListVC:(id)a1 dataConfig:(id)a2 requestScene:(id)a3 completion:(id /* block */)a4;
+ (BOOL)hitDisplayPageClean;
+ (id)commonTrackParamsWithMessage:(id)a0;
+ (id)enterFromStringWithMessageID:(id)a0;
+ (BOOL)isEnterFromMessageBaseViewController;
+ (BOOL)hitShowQuoteBtn;
+ (void)showEmojiUnderMessage:(id)a0 context:(id)a1;
+ (void)trackButtonClickWithType:(id)a0 message:(id)a1;
+ (id)getDownloadStageErrorDescrib:(long long)a0 errorCode:(long long)a1;
+ (id)getNaviTitleWithMessage:(id)a0;
+ (id)getMediaVCCurrentDisplayMessageFrom:(id)a0;
+ (BOOL)shouldHideBottomBar:(id)a0;
+ (id)currentNaviTitleWithMessage:(id)a0;
+ (void)currentNaviTitleInfoWithAweme:(id)a0 quoteReplyMessage:(id)a1 callBack:(id /* block */)a2;
+ (void)currentNaviTitleInfoWithAweme:(id)a0 message:(id)a1 callBack:(id /* block */)a2;
+ (void)p_showWithMessage:(id)a0 inMessageListVC:(id)a1 dataConfig:(id)a2 requestScene:(id)a3 completion:(id /* block */)a4;
+ (id)p_getFeedDetailVCWithMessage:(id)a0 fromAweme:(id)a1 inMessageListVC:(id)a2 dataConfig:(id)a3 referString:(id)a4 logExtraDict:(id)a5;
+ (BOOL)shouldShowCaptionVideo:(id)a0;
+ (void)p_pushFeedDetailVCWithMessage:(id)a0 viewController:(id)a1 inMessageListVC:(id)a2 transitionClassName:(id)a3 completion:(id /* block */)a4;
+ (void)clearAllEnterFromString;
+ (id)getNaviTitleWithNameString:(id)a0 message:(id)a1;
+ (BOOL)p_isSupportMediaDisplayVC:(id)a0;
+ (id)getDisplayPageABConfig;
+ (void)showCollapseMediaController:(id)a0 message:(id)a1 inMessageListVC:(id)a2 requestScene:(id)a3 completion:(id /* block */)a4;
+ (void)currentNaviTitleInfoWithAweme:(id)a0 externalRefFakeMessage:(id)a1 callBack:(id /* block */)a2;
+ (void)removeEmojiUnderMessage:(id)a0;
+ (void)recordEnterFromWithMessageID:(id)a0 enterFrom:(id)a1;
+ (id)sharedInstance;

- (id)getCurrentDisplayMessageFrom:(id)a0;
- (void)showSingleMediaController:(id)a0 inMessageListVC:(id)a1 shouldShowComment:(BOOL)a2 requestScene:(id)a3;
- (void)showSingleMediaController:(id)a0 inMessageListVC:(id)a1 shouldShowChapterPanel:(BOOL)a2 requestScene:(id)a3;
- (void)showSingleMediaController:(id)a0 inMessageListVC:(id)a1 requestScene:(id)a2;
- (void)showCollapseMediaController:(id)a0 inMessageListVC:(id)a1 requestScene:(id)a2;
- (void)showCollapseMediaController:(id)a0 inMessageListVC:(id)a1 extraParams:(id)a2 requestScene:(id)a3 completion:(id /* block */)a4;
- (void)showCollapseMediaController:(id)a0 inMessageListVC:(id)a1 shouldShowComment:(BOOL)a2 requestScene:(id)a3;
- (void)showCollapseMediaController:(id)a0 inMessageListVC:(id)a1 extraParams:(id)a2 requestScene:(id)a3;
- (id)currentFromUserWithMessage:(id)a0;
- (void)showMediaController:(id)a0 inMessageListVC:(id)a1 dataConfig:(id)a2 requestScene:(id)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
