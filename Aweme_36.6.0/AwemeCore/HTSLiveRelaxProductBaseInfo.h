@class NSString, HTSLiveImage;

@interface HTSLiveRelaxProductBaseInfo : IESLivePBBaseMessage

@property (nonatomic) long long productId;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long startPrice;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *productIdStr;

+ (id)descriptor;

@end
