@class NSArray, NSString;

@interface LLPOISkeletonConfigModel : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } origin;
@property (nonatomic) double skeletonCornerRadius;
@property (nonatomic) double itemCornerRadius;
@property (retain, nonatomic) NSArray *backgroundColorsArray;
@property (retain, nonatomic) NSArray *itemColorsArray;
@property (nonatomic) long long gradientDirection;
@property (retain, nonatomic) NSString *animation;
@property (retain, nonatomic) NSArray *items;

- (void).cxx_destruct;

@end
