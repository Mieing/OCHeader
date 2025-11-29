@class IESLLPOIDetailNGUgcBottomBarComponentViewModel, IESLLPOIUgcBottomBarView;

@interface IESLLPOIDetailNGUgcBottomBarComponentView : LLDitoComponentView

@property (weak, nonatomic) IESLLPOIDetailNGUgcBottomBarComponentViewModel *vm;
@property (nonatomic) BOOL isShow;
@property (retain, nonatomic) IESLLPOIUgcBottomBarView *ugcBottomBar;

- (void)updateViewModel:(id)a0;
- (void)bindActionAndState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })ugcBarFrame;
- (void)onUgcBottomBarCommentClicked:(id)a0;
- (void)onUgcBottomBarRecordClicked:(id)a0;
- (void)onUgcBottomBarUploadImgClicked:(id)a0;
- (void)showAnimationWithCompletion:(id /* block */)a0;
- (void)sendAppearEvent;
- (void)hiddenAnimationWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
