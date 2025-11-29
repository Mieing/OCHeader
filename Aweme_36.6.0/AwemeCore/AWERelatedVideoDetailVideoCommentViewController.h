@class NSString, NSDictionary, AWEAwemeModel, UIScrollView, AWERVDetailPageContext, UIViewController;
@protocol AWECommentInputViewProtocol, AWECommentListViewControllerProtocol;

@interface AWERelatedVideoDetailVideoCommentViewController : UIViewController <AWECommentControlVideoStateProtocol>

@property (retain, nonatomic) UIViewController<AWECommentListViewControllerProtocol> *commentVC;
@property (retain, nonatomic) id<AWECommentInputViewProtocol> commentInputView;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL isPausedByComment;
@property (copy, nonatomic) id /* block */ didCreateInputView;
@property (copy, nonatomic) id /* block */ didHideInputView;
@property (copy, nonatomic) id /* block */ willHideInputView;
@property (copy, nonatomic) id /* block */ didShowInputView;
@property (copy, nonatomic) id /* block */ onCommentDidScroll;
@property (retain, nonatomic) AWERVDetailPageContext *pageContext;
@property (retain, nonatomic) UIScrollView *commentScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logExtraDict;
- (void)showInputView;
- (BOOL)recoverPlayIfPauseByComment;
- (BOOL)pauseVideoIfPlaying;
- (void)commentVCRefresh;
- (void)scrollCommentToTop:(BOOL)a0;
- (void)loadCommentVCIfNeeded;
- (void)setupCommentVC:(id)a0;
- (void)startRequestAnimating;
- (void)refreshModel:(id)a0 params:(id)a1;
- (BOOL)canScrollToDownDirection;
- (struct CGPoint { double x0; double x1; })commentViewOffset;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (id)init;

@end
