@class NSString, HTSLiveImage;

@interface HTSLiveLinkmicInteractEntrance_BannerInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL hasImage;
@property (copy, nonatomic) NSString *schema;

+ (id)descriptor;

@end
