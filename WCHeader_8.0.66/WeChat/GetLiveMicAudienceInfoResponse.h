@class NSMutableArray, BaseResponse;

@interface GetLiveMicAudienceInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *liveMicAudienceList;

+ (void)initialize;

@end
