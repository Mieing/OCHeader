@class UIColor;

@interface AWEIMSimilarEmoticonLayerView : UIView

@property (retain, nonatomic) UIColor *startColor;
@property (retain, nonatomic) UIColor *endColor;
@property (nonatomic) unsigned long long type;

+ (Class)layerClass;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStartColor:(id)a0 endColor:(id)a1 type:(unsigned long long)a2;

@end
