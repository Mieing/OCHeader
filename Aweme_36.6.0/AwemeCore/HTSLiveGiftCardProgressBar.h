@class NSString;

@interface HTSLiveGiftCardProgressBar : IESLivePBBaseMessage

@property (nonatomic) int currentValue;
@property (nonatomic) int totalValue;
@property (copy, nonatomic) NSString *singleColor;
@property (copy, nonatomic) NSString *gradientColor;
@property (nonatomic) int previewValue;
@property (copy, nonatomic) NSString *previewColorImage;

+ (id)descriptor;

@end
