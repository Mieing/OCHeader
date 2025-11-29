@class CAShapeLayer, AWETeenSaveButtonModel, UIView, NSTimer;

@interface AWETeenModeSaveButton : UIButton

@property (retain, nonatomic) UIView *downloadingView;
@property (retain, nonatomic) CAShapeLayer *downloadingLayer;
@property (retain, nonatomic) AWETeenSaveButtonModel *buttonModel;
@property (retain, nonatomic) NSTimer *scalingTimer;
@property (nonatomic) double scalingCount;
@property (copy, nonatomic) id /* block */ clickBlock;

+ (id)buttonWithModel:(id)a0;

- (void)p_setupBinding;
- (void)p_clickToDownload;
- (void)p_scalingGuide;
- (void)p_updateBGColor;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)endAnimation;
- (void)beginAnimation;

@end
