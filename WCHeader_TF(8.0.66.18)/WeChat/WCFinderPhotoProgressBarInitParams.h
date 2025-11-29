@class UIColor;

@interface WCFinderPhotoProgressBarInitParams : NSObject

@property (nonatomic) double barSpacing;
@property (nonatomic) double barHeight;
@property (nonatomic) double cornerRadius;
@property (retain, nonatomic) UIColor *backgroundBarColor;
@property (retain, nonatomic) UIColor *fillBarColor;
@property (nonatomic) BOOL enableTapGes;

+ (id)defaultParams;

- (id)init;
- (void).cxx_destruct;

@end
