@class UIButton, IESLivePrivilegeDressPreviewModel;

@interface IESLivePrivilegeDressPreviewBaseView : UIView

@property (retain, nonatomic) UIButton *previewButton;
@property (copy, nonatomic) id /* block */ previewButtonTapBlock;
@property (retain, nonatomic) IESLivePrivilegeDressPreviewModel *previewModel;
@property (copy, nonatomic) id /* block */ removeBlock;

- (void)previewButtonClick:(id)a0;
- (void)setupPreviewButton;
- (id)initWithPreviewModel:(id)a0 DIContext:(id)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)removeFromSuperview;

@end
