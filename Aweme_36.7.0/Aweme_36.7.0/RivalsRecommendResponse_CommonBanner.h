@class NSString;

@interface RivalsRecommendResponse_CommonBanner : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *bannerInfo;
@property (copy, nonatomic) NSString *bannerArea;

+ (id)descriptor;

@end
