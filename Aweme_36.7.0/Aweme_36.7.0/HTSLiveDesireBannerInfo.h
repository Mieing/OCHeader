@class NSString, HTSLiveImage;

@interface HTSLiveDesireBannerInfo : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *bannerPicture;
@property (nonatomic) BOOL hasBannerPicture;
@property (copy, nonatomic) NSString *bannerURL;

+ (id)descriptor;

@end
