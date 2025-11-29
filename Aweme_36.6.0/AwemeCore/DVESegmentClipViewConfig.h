@class UIColor, UIImage;

@interface DVESegmentClipViewConfig : NSObject

@property (retain, nonatomic) UIColor *selectedBorderColor;
@property (retain, nonatomic) UIColor *innerBorderColor;
@property (retain, nonatomic) UIImage *leftArrowImage;
@property (retain, nonatomic) UIImage *rightArrowImage;

+ (id)upgradesConfig;

- (void).cxx_destruct;

@end
