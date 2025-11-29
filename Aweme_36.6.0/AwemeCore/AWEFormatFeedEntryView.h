@class CAGradientLayer, NSString, UIImageView, CAShapeLayer;

@interface AWEFormatFeedEntryView : UIView <AWEFormatFeedEntryViewProtocol>

@property (retain, nonatomic) CAShapeLayer *markClipLayer;
@property (retain, nonatomic) CAGradientLayer *markColorLayer;
@property (retain, nonatomic) UIImageView *formatTag;
@property (retain, nonatomic) UIImageView *gradientBorder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)showEntryView;
- (void)hideEntryView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
