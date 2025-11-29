@class UIImageView, MMBadgeView, UIView, EmoticonCustomManageWrap, MMAssetSelectCheckButton;
@protocol EmoticonCustomManageViewDelegate;

@interface EmoticonCustomManageView : MMUIView

@property (retain, nonatomic) EmoticonCustomManageWrap *wrap;
@property (retain, nonatomic) UIView *contentContainerView;
@property (retain, nonatomic) UIImageView *emoticonView;
@property (retain, nonatomic) UIView *selectedMaskView;
@property (retain, nonatomic) MMAssetSelectCheckButton *selectCheckButton;
@property (retain, nonatomic) UIView *animationMaskView;
@property (retain, nonatomic) MMBadgeView *countView;
@property (retain, nonatomic) UIView *countContainerView;
@property (retain, nonatomic) UIView *highlightOverlay;
@property (weak, nonatomic) id<EmoticonCustomManageViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)resizeWithNewSize:(double)a0 scaledSize:(double)a1;
- (id)getMaskView;
- (void)configSelectedMarkView;
- (void)configAnimationMask;
- (void)setEmoticonCustomManageWrap:(id)a0;
- (void)updateSelect;
- (void)updateCountContainerPosition;
- (void)doFlashAnimation;
- (void)onGestureTap;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)showHighLight:(BOOL)a0;
- (void).cxx_destruct;

@end
