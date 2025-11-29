@class NSString;

@interface GetIconBackGroundResponse_Data : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *rgb;
@property (copy, nonatomic) NSString *hsl;
@property (copy, nonatomic) NSString *wordRgb;
@property (copy, nonatomic) NSString *wordHsl;

+ (id)descriptor;

@end
