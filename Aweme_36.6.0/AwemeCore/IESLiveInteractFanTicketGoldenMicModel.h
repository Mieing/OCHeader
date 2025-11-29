@class UIColor, NSString, NSArray, UIImage;

@interface IESLiveInteractFanTicketGoldenMicModel : NSObject

@property (retain, nonatomic) UIImage *goldenMicImage;
@property (retain, nonatomic) UIColor *goldenMicTextColor;
@property (copy, nonatomic) NSString *goldenMicCountStr;
@property (copy, nonatomic) NSArray *gradientLayerColors;
@property (copy, nonatomic) NSArray *gradientLayerLocations;
@property (nonatomic) BOOL animation;

+ (id)goldenMicModelWithGolden:(BOOL)a0;

- (void).cxx_destruct;

@end
