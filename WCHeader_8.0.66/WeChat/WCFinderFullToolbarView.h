@class NSString, WCFinderFeedContentVM, UIView;
@protocol WCFinderFullToolbarViewDelegate;

@interface WCFinderFullToolbarView : UIView <WCFinderFeedToolbarActionDelegate, WCFinderFeedRetryToolBarDelegate, WCFinderFeedUploadingToolBarDelegate, WCFinderFeedContentVMExt, WCFinderFeedNotRealNameToolbarViewDelegate, MMFinderFriendLikeShootingAinmationStartProtocol>

@property (nonatomic) unsigned long long toolBarStyle;
@property (retain, nonatomic) UIView *toolbarView;
@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (nonatomic) unsigned long long contentStatus;
@property (weak, nonatomic) id<WCFinderFullToolbarViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)defaultWidthWithContentVM:(id)a0;
+ (double)defaultHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)unRegisterAllKeyExtension;
- (void)updateToolBarWithContentVM:(id)a0 toolBarStyle:(unsigned long long)a1 toolbarDisableConfig:(unsigned long long)a2;
- (void)layoutSubviews;
- (long long)toolbarEyeStyleForContentVM:(id)a0;
- (BOOL)isShowingLikeEducateTips;
- (void)cellDidEndDisplayingWithContentVM:(id)a0 toolBarStyle:(unsigned long long)a1;
- (void)initToolbarViewWithStyle:(unsigned long long)a0;
- (void)prepareForReuse;
- (void)endExposeAction;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getLikeButtonItemImageViewFrameOnFullView;
- (void)updatePrivateState:(BOOL)a0;
- (void)cleanDataEntraceReportData;
- (id)getLiveNormalToolBar;
- (id)getAuthorNormalToolBar;
- (id)getAuthorUploadFailToolBar;
- (id)getAuthorUploadFailWithoutRetryToolBar;
- (id)getAuthorCDNLargeFailWithoutRetryToolBar;
- (id)getFileNotExistFailWithoutRetryToolBar;
- (id)getEventNotExistFailWithoutRetryToolBar;
- (id)getRetryToolBarWithErrorTips:(id)a0 errorReason:(id)a1 buttonOptionFlag:(unsigned long long)a2;
- (id)getAuthorUploadingToolBar;
- (id)getCollectionToolbar;
- (id)getAuthorNotRealNameToolBar;
- (void)finderNotRealNameToolBarClickCancel:(id)a0;
- (void)finderNotRealNameToolBarClickRetry:(id)a0;
- (void)finderNotRealNameToolBarClickRealNameLink:(id)a0;
- (void)viewAllCommentAction;
- (void)finderAuthorClickAllLikeAction;
- (void)finderAuthorClickAllFavAction;
- (void)finderAuthorClickAllViewBtn;
- (void)triangleShadowViewHideChanged:(BOOL)a0;
- (void)willClickLikeAction:(BOOL)a0;
- (void)longPressLikeAction:(unsigned long long)a0 longPressGes:(id)a1 likeFlag:(int)a2;
- (void)didClickLikeAction:(BOOL)a0;
- (BOOL)isToolbarEnableClickLike;
- (void)willClickCollectionAction;
- (void)didClickCollectionAction;
- (void)didClickShareAction:(id)a0;
- (void)finderFeedRetryToolBarClickCancel:(id)a0;
- (void)finderFeedRetryToolBarClickRetry:(id)a0;
- (void)finderFeedUploadingToolBarClickCancel:(id)a0;
- (void)onFeedContentRealTimeSynced:(id)a0;
- (void)onFeedContent:(id)a0 likedDataChanged:(id)a1;
- (void)onFeedContent:(id)a0 commentDataChanged:(id)a1;
- (void)onFeedContent:(id)a0 changeUploadStatus:(id)a1;
- (void)onFeedContent:(id)a0 commentOpenStatueChanged:(id)a1;
- (void)onFeedContent:(id)a0 favDataChanged:(id)a1;
- (void)onFinderContentLiveFriendLikeFeatureEnableUpdate:(id)a0;
- (id)viewEyeView;
- (id)actionViewWithType:(unsigned long long)a0;
- (void)clickRecommendUrl:(id)a0;
- (void)updateLikeTipsShowState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })friendLikeShootingAinmationStartGetFrame;
- (void).cxx_destruct;

@end
