@class NSString, AFDSnackBar, UIView, NSNumber, NSObject;
@protocol AWEFavoriteNoticeManageDelegate;

@interface AWEFavoriteNoticeView : UIView <AFDSnackBarLifeCycleDelegate, AFDSnackBarViewDelegate>

@property (copy, nonatomic) NSString *recommendCollectionFolderName;
@property (retain, nonatomic) UIView *bodyView;
@property (retain, nonatomic) AFDSnackBar *snackBar;
@property (nonatomic) BOOL isAddButton;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *authorID;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) BOOL isFavoriteNotice;
@property (nonatomic) BOOL isCancelToast;
@property (nonatomic) BOOL isFolderToast;
@property (nonatomic) BOOL isFromRedFavoriteTramsferButton;
@property (retain, nonatomic) NSNumber *mustShowFavoriteToast;
@property (retain, nonatomic) NSString *toastType;
@property (retain, nonatomic) NSString *fromTabs;
@property (retain, nonatomic) NSNumber *collectsId;
@property (retain, nonatomic) NSString *collectsName;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) unsigned long long currentFavoriteType;
@property (weak, nonatomic) NSObject<AWEFavoriteNoticeManageDelegate> *delegate;
@property (copy, nonatomic) id /* block */ didClickNotice;
@property (copy, nonatomic) id /* block */ endNoticeViewPromise;
@property (copy, nonatomic) id /* block */ noticeViewShowAnimationFinishBlock;
@property (retain, nonatomic) NSNumber *customBottomPadding;
@property (copy, nonatomic) NSString *homepageHotScene;
@property (copy, nonatomic) NSString *isDual;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEBrandColorAdapterClass;
+ (Class)aAWEFeedModuleServiceDOUYINHTSAdaperClass;
+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (id)aAWEBrandColorAdapter;
- (id)aAWEFeedModuleServiceDOUYINHTSAdaper;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)snackBarSuperView;
- (void)snackBarDismissDueToTouchSpace;
- (void)snackBarShowAnimationDidStop;
- (void)snackBarDismissDueToTimeOut;
- (id)initWithString:(id)a0 initWithBool:(BOOL)a1 block:(id /* block */)a2;
- (void)noticeShowWithHasBottomBar:(BOOL)a0;
- (id)initWithString:(id)a0 actionBtnTitleString:(id)a1 initWithBool:(BOOL)a2 recommendCollectionFolderName:(id)a3 block:(id /* block */)a4;
- (void)noticeDismiss;
- (void)trackNoticeClickWithToastType:(id)a0;
- (void)initSnackBarWithString:(id)a0 actionBtnTitleString:(id)a1 initWithBool:(BOOL)a2 recommendCollectionFolderName:(id)a3 block:(id /* block */)a4;
- (void)p_setupBodyViewWithString:(id)a0 actionBtnTitleString:(id)a1 initWithBool:(BOOL)a2 recommendCollectionFolderName:(id)a3 block:(id /* block */)a4;
- (void)p_showSnackBar:(BOOL)a0;
- (void)trackNoticeShowWithToastType:(id)a0;
- (void)clickNotice;
- (void)p_setupFavoriteSnackBar;
- (void)trackFolderNoticeClickWithToastType:(id)a0;
- (void)trackChangeProfileTabWithEnterMethod:(id)a0 extra:(id)a1;
- (void)handleClickNoticeViewWithNoFavoriteFolder;
- (id)getCollectType;
- (void)enterVideoCollectionTrackWithEnterMethod:(id)a0;
- (void).cxx_destruct;

@end
