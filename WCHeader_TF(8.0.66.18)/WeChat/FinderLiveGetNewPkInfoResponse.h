@class FinderLiveMicInfo, BaseResponse;

@interface FinderLiveGetNewPkInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) FinderLiveMicInfo *newPkInfo;

+ (void)initialize;

@end
