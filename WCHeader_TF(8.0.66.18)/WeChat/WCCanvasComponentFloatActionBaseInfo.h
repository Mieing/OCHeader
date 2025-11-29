@class NSString, WCCanvasComponentItem;

@interface WCCanvasComponentFloatActionBaseInfo : MMObject <NSCoding>

@property (retain, nonatomic) NSString *backgroundImg;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) double backgroundColorAlpha;
@property (nonatomic) BOOL backgroundBlurEffect;
@property (retain, nonatomic) NSString *backgroundBlurEffectColor;
@property (nonatomic) double backgroundBlurEffectColorAlpha;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *titleColor;
@property (nonatomic) double titleColorAlpha;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *descColor;
@property (nonatomic) double descColorAlpha;
@property (nonatomic) BOOL isFullClickable;
@property (retain, nonatomic) WCCanvasComponentItem *actionButton;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
