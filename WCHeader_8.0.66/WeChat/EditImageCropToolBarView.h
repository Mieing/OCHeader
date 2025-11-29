@class EditImageCropToolBarViewModel, WCEditImageCropToolBarViewUIConfig, UIView, UIImageView, UIButton;
@protocol EditImageCropToolBarDelegate;

@interface EditImageCropToolBarView : MMUIView {
    BOOL _revertBtnEnable;
    UIImageView *_bottomBackgroundView;
}

@property (retain, nonatomic) UIView *topLine;
@property (retain, nonatomic) WCEditImageCropToolBarViewUIConfig *uiConfig;
@property (retain, nonatomic) EditImageCropToolBarViewModel *viewStateModel;
@property (retain, nonatomic) UIButton *rotateBtn;
@property (retain, nonatomic) UIButton *cropProportionBtn;
@property (weak, nonatomic) id<EditImageCropToolBarDelegate> _delegate;
@property (retain, nonatomic) UIButton *_doneBtn;
@property (retain, nonatomic) UIButton *_cancelBtn;
@property (retain, nonatomic) UIButton *_revertBtn;
@property (nonatomic) BOOL bBtnUseWord;
@property (readonly, nonatomic) BOOL isRevertBtnEnabled;
@property (readonly, nonatomic) BOOL canAddTopLine;

- (id)init;
- (void)layoutSubviews;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)canRevertEnable:(BOOL)a0;
- (void)hideRotateBtn:(BOOL)a0 withAnimation:(BOOL)a1;
- (void)onCropProportionBtnClicked:(id)a0;
- (void)onReverBtnClick:(id)a0;
- (void).cxx_destruct;

@end
