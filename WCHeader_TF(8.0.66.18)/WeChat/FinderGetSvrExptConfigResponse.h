@class NSMutableArray, BaseResponse;

@interface FinderGetSvrExptConfigResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *exptConfig;
@property (nonatomic) unsigned int nextDuration;

+ (void)initialize;

@end
