@class NSArray, NSString, NSNumber;

@interface AWECommentSurpriseEggModel : AWEBaseApiModel

@property (copy, nonatomic) NSArray *imageUrlList;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) long long particleNum;
@property (copy, nonatomic) NSArray *particleSize;
@property (copy, nonatomic) NSArray *particleCenterX;
@property (retain, nonatomic) NSNumber *particleProDelay;
@property (copy, nonatomic) NSArray *particleFallX;
@property (copy, nonatomic) NSArray *particleFallY;
@property (copy, nonatomic) NSArray *particleFallCurveX;
@property (copy, nonatomic) NSArray *particleFallCurveY;
@property (copy, nonatomic) NSArray *particleFallSpeed;
@property (copy, nonatomic) NSArray *particleAlpha;
@property (copy, nonatomic) NSString *showCount;
@property (copy, nonatomic) NSString *showText;
@property (copy, nonatomic) NSString *lightBGColor;
@property (copy, nonatomic) NSString *darkBGColor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
