@class NSObject, NSString, AWEAwemeModel;
@protocol IESGCPCommentPanelViewControllerProtocol, AWEAwemePlayInteractionInteractorProtocol;

@interface IESGCPActionPanelService_Douyin : NSObject <IESGCPActionPanelService>

@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) NSObject<AWEAwemePlayInteractionInteractorProtocol> *awemePlayInteractionInteractor;
@property (retain, nonatomic) NSObject<IESGCPCommentPanelViewControllerProtocol> *commentPanelViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onShareButtonTapped:(id)a0;
- (void)favoriteWithFavoriteBlock:(id /* block */)a0 unfavoriteBlock:(id /* block */)a1 otherActionBlock:(id /* block */)a2 actionFailedBlock:(id /* block */)a3 enterMethod:(id)a4 enterFrom:(id)a5 snackBarBottomPadding:(double)a6 forceAFDSnackBar:(BOOL)a7 a11yDismissView:(id)a8;
- (void)updateAwemeModel:(id)a0;
- (void)doSafeDiggWithDiggBlock:(id /* block */)a0 undiggBlock:(id /* block */)a1 otherActionBlock:(id /* block */)a2 actionFailedBlock:(id /* block */)a3 diggOriginItem:(BOOL)a4 enterMethod:(id)a5 inFollowFeed:(BOOL)a6 ignoreUnlogin:(BOOL)a7 animationBlock:(id /* block */)a8;
- (void)onCommentButtonTapped:(id)a0 showInputView:(BOOL)a1 exterMethod:(id)a2;
- (void)diggNotification:(id)a0 completion:(id /* block */)a1;
- (void)favoriteNotification:(id)a0 completion:(id /* block */)a1;
- (void)commentTotalCountNotification:(id)a0 completion:(id /* block */)a1;
- (void)addTrackParamsWithLogExtraDict:(id)a0 referString:(id)a1;
- (void).cxx_destruct;

@end
