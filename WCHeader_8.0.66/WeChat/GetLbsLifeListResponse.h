@class BaseResponse, NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface GetLbsLifeListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) SKBuiltinBuffer_t *buff;
@property (nonatomic) unsigned int iconCount;
@property (retain, nonatomic) NSMutableArray *iconList;
@property (nonatomic) unsigned int lifeCount;
@property (retain, nonatomic) NSMutableArray *lifeList;
@property (nonatomic) unsigned int continueFlag;
@property (retain, nonatomic) NSString *logoUrl;
@property (retain, nonatomic) NSString *searchId;
@property (nonatomic) int autoQueryInterval;

+ (void)initialize;

@end
