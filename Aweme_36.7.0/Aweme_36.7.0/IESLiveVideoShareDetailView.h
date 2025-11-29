@class IESLiveWebpLoadingView, UIView, NSString, IESLiveImageTextButton, UIButton, UIViewController, VideoTab, NSIndexPath;
@protocol IESLiveCommentVideoShareVideoViewControllerProtocol;

@interface IESLiveVideoShareDetailView : UIView <IESLiveSocialInteractAction, IESLiveCommentPopupViewProtocol>

@property (retain, nonatomic) VideoTab *videoTab;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) BOOL pinEnabled;
@property (retain, nonatomic) UIButton *backBtn;
@property (retain, nonatomic) IESLiveImageTextButton *sendBtn;
@property (retain, nonatomic) IESLiveImageTextButton *topBtn;
@property (retain, nonatomic) IESLiveImageTextButton *topIconBtn;
@property (retain, nonatomic) IESLiveWebpLoadingView *loadingView;
@property (nonatomic) BOOL topBtnSelected;
@property (retain, nonatomic) UIViewController<IESLiveCommentVideoShareVideoViewControllerProtocol> *currentVideoPlayViewController;
@property (retain, nonatomic) UIView *landscapeVideoPlayViewContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ popupBack;
@property (copy, nonatomic) id /* block */ heightChange;

- (void)didSetAttachingDIContext;
- (void)didLeaveChannelWithLayout:(id)a0;
- (void)backBtnClick:(id)a0;
- (void)p_trackWithEvent:(id)a0 params:(id)a1;
- (void)playVideoWithItemID:(id)a0 trackParams:(id)a1;
- (void)p_setupBackAndLoadingView;
- (double)p_viewBottomMargin;
- (void)sendBtnClick:(id)a0;
- (void)topBtnClick:(id)a0;
- (void)p_leaveCurrentPage;
- (id)initWithVideoTab:(id)a0 indexPath:(id)a1 pinEnabled:(BOOL)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupView;

@end
