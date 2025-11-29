@class FinderLiveKtvResourceAtmosphereBg, FinderLiveKtvResourceReverb, BaseResponse;

@interface FinderLiveKtvGetResourceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveKtvResourceAtmosphereBg *resourceAb;
@property (retain, nonatomic) FinderLiveKtvResourceReverb *resourceRb;

+ (void)initialize;

@end
