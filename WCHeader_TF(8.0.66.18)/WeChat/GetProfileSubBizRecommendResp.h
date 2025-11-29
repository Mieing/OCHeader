@class NSString, NSMutableArray, BaseResponse;

@interface GetProfileSubBizRecommendResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *bizrecommendurl;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int profileBizuin;

+ (void)initialize;

@end
