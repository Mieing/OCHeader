@class BDByteScreenCastSearchNoDeviceModel, UIScrollView, UIView, UIImage, NSString, UIImageView, CAGradientLayer, UILabel, BDByteScreenCastSearchNoDeviceView;

@interface BDSCSearchNoDeviceView : UIView <BDSCSearchDeviceNoDeviceViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) BDByteScreenCastSearchNoDeviceView *noDeviceView;
@property (retain, nonatomic) CAGradientLayer *feedbackMaskLayer;
@property (retain, nonatomic) UIView *feedbackView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *feedbackBtn;
@property (retain, nonatomic) UIImageView *feedbackImageView;
@property (nonatomic) double feedbackMargin;
@property (nonatomic) BOOL feedbackBottom;
@property (retain, nonatomic) BDByteScreenCastSearchNoDeviceModel *model;
@property (retain, nonatomic) UIImage *feedbackImage;
@property (copy, nonatomic) id /* block */ airPlayBlock;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildSubviews;
- (void)configFeedbackMargin:(double)a0 bottom:(BOOL)a1;
- (void)updateFeedbackImageView;
- (void)onFeedBackClick:(id)a0;
- (void)layoutSublayersOfLayer:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)rebuildConstraints;

@end
