@class UIColor, NSArray, NSString, IESGCPPBGameImage;

@interface IESGCPDetailBackgroundImageConfig : NSObject

@property (nonatomic) double imageViewHeigh;
@property (nonatomic) BOOL autoFitHeight;
@property (nonatomic) double gradientLayerHeigh;
@property (retain, nonatomic) NSArray *gradientColorLocations;
@property (retain, nonatomic) NSArray *gradientLayerColors;
@property (nonatomic) double secondGradientLayerHeight;
@property (retain, nonatomic) NSArray *secondGradientLayerColors;
@property (copy, nonatomic) NSString *localImageName;
@property (nonatomic) BOOL localImageUseBlendMode;
@property (retain, nonatomic) UIColor *blendColor;
@property (copy, nonatomic) IESGCPPBGameImage *headerImage;

- (void).cxx_destruct;

@end
