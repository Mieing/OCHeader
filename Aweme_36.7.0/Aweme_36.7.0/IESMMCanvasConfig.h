@class UIColor, UIImage, NSString;

@interface IESMMCanvasConfig : NSObject <NSCopying>

@property (nonatomic) long long canvasType;
@property (retain, nonatomic) UIColor *canvasColor;
@property (retain, nonatomic) UIImage *canvasImage;
@property (retain, nonatomic) NSString *canvasImagePath;
@property (nonatomic) double blurRaidus;
@property (nonatomic) BOOL enableVideoAnimation;
@property (retain, nonatomic) UIColor *canvasGradientTopColor;
@property (retain, nonatomic) UIColor *canvasGradientBotColor;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDict:(id)a0;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)toDict;

@end
