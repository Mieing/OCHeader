@class UIViewController, AWELandscapePageContext, NSString, AWEAwemeModel, UILabel, UIView, UIButton;
@protocol AWECommentInputViewProtocol, AWECommentListViewControllerProtocol, AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeCommentViewController : UIViewController <AWECommentControlVideoStateProtocol>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UILabel *commentCountLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIView *bottomLine;
@property (retain, nonatomic) UIView *inputViewContainer;
@property (retain, nonatomic) UIView<AWECommentInputViewProtocol> *inputView;
@property (retain, nonatomic) UIView *fakeXiguaInputContainer;
@property (retain, nonatomic) UILabel *fakeXiguaInputLabel;
@property (nonatomic) double splitScreenWidth;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isSlideVideo;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> delegate;
@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateCommentCount;
- (void)removeFromParentVC;
- (BOOL)recoverPlayIfPauseByComment;
- (BOOL)pauseVideoIfPlaying;
- (id)initWithPageContext:(id)a0;
- (BOOL)isLandscapeFirst;
- (void)refreshCommentVC;
- (void)refreshLogExtra;
- (void)openXigua:(id)a0;
- (void)addCommentInputView;
- (void)showWithModel:(id)a0 isSlideVideo:(BOOL)a1;
- (void)dismiss;
- (void).cxx_destruct;
- (void)loadView;
- (void)setupUI;
- (void)updateUI;

@end
