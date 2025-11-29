@class NSString, HTSLiveImage;

@interface RetainWindowResponse_ProductInfo : IESLivePBBaseMessage

@property (nonatomic) long long productId;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (nonatomic) long long originalPrice;
@property (nonatomic) long long discountPrice;

+ (id)descriptor;

@end
