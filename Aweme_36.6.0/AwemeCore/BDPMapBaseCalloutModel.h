@class NSString, UIColor;

@interface BDPMapBaseCalloutModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) UIColor *bgColor;
@property (nonatomic) double fontSize;
@property (nonatomic) double borderRadius;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) UIColor *borderColor;
@property (nonatomic) double topBottomPadding;
@property (nonatomic) double leftRightPadding;
@property (nonatomic) long long textAlign;
@property (nonatomic) double anchorX;
@property (nonatomic) double anchorY;

- (id)modelCustomWillTransformFromDictionary:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
