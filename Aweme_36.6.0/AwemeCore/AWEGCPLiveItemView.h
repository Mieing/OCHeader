@class NSString, AWEGCPDetailAuthorInfoView, UIView, AWEGCPAwemeModel, MASConstraint;
@protocol AWEGCPLivePlayerViewProtocol, AWEGCPVideoPlayService;

@interface AWEGCPLiveItemView : UIView <AWEGCPAutoPlayCardProtocol, IESGCPViewExposedAble>

@property (retain, nonatomic) id<AWEGCPVideoPlayService> videoPlayService;
@property (retain, nonatomic) AWEGCPDetailAuthorInfoView *authorInfoView;
@property (retain, nonatomic) UIView<AWEGCPLivePlayerViewProtocol> *playerController;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) AWEGCPAwemeModel *gameAwemeModel;
@property (retain, nonatomic) MASConstraint *playerControllerSizeConstraint;
@property (nonatomic) struct CGSize { double width; double height; } playerSize;
@property (nonatomic) double authorInfoViewHeight;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) BOOL showSeparator;
@property (copy, nonatomic) id /* block */ exposedHandle;
@property (copy, nonatomic) id /* block */ speakerButtonDidClicked;
@property (copy, nonatomic) id /* block */ playViewDidClick;
@property (nonatomic) BOOL isActive;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showSeparatorView:(BOOL)a0;
- (id)fromContextProvider;
- (void)updateViewLayout;
- (void)didEndShowing;
- (void)layoutWithViewStyle:(long long)a0;
- (void)updateWithModel:(id)a0 isMute:(BOOL)a1 maxWidth:(double)a2;
- (void)playViewDidClick:(id)a0;
- (void)didBecomeActiveWithForceNotMute:(BOOL)a0;
- (void)viewExposed;
- (void)routeToLiveRoom;
- (void).cxx_destruct;
- (id)init;
- (id)videoView;
- (void)didResignActive;
- (void)setup;
- (void)setMute:(BOOL)a0;

@end
