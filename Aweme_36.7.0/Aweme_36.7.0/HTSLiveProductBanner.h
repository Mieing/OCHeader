@class NSString, HTSLiveImage;

@interface HTSLiveProductBanner : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *cover;
@property (nonatomic) BOOL hasCover;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
