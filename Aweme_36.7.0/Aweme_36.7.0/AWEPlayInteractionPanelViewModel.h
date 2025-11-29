@class NSString, UIViewController, AWEPageContext;
@protocol AWEPlayInteractionContextProtocol, AFDFriendsActionViewControllerProtocol;

@interface AWEPlayInteractionPanelViewModel : AWEPlayInteractionBaseViewModel <AFDFriendsActionViewControllerDelegate, AWEPlayInteractionPanelViewModelProtocol>

@property (retain, nonatomic) UIViewController<AFDFriendsActionViewControllerProtocol> *friendsActionViewController;
@property (retain, nonatomic) NSString *sharePanelEnterMethod;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) AWEPageContext<AWEPlayInteractionContextProtocol> *context;

- (void)longPressDislikeVideo;
- (void)longPressDislikeVideoWithButtonType:(unsigned long long)a0;
- (void)longPressFriendsAction;
- (void)confirmButtonDidClicked;
- (void)linkLabelDidTapped;
- (id)guideShowCountStorageKey;
- (void)trackRemoveFriendsEventWithTrackType:(unsigned long long)a0;
- (void)longPressDownloadWithSelectedIndices:(id)a0 completion:(id /* block */)a1;
- (void)interactor_downloadFromLongPressWithSelectedIndices:(id)a0 completion:(id /* block */)a1;
- (void)interactor_toggleFavoriteFromLongPress;
- (void)interactor_reportFromLongPress;
- (void)interactor_dislikeVideoFromLongPressWithButtonType:(unsigned long long)a0;
- (void)longPressDownload;
- (void)longPressToggleFavorite;
- (void)longPressReport;
- (id)generateDislikeModelForSearch;
- (void)interactor_downloadFromLongPress;
- (void).cxx_destruct;

@end
