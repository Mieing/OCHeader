@class ACCAnimatedButton, AWEStoryColorChooseView;
@protocol ACCTextStickerColorListDelegate;

@interface ACCTextStickerEditColorListView : UIView

@property (retain, nonatomic) AWEStoryColorChooseView *colorChooseView;
@property (retain, nonatomic) ACCAnimatedButton *closeColorViewBtn;
@property (weak, nonatomic) id<ACCTextStickerColorListDelegate> delegate;

- (void)selectWithColor:(id)a0;
- (void)clearSelectColor;
- (void)closeColorViewBtnClickHander;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)selectedColor;
- (void)setupUI;

@end
