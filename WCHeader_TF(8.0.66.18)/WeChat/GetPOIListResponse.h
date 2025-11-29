@class BaseResponse, NSString, NSMutableArray, SKBuiltinBuffer_t;

@interface GetPOIListResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int listCount;
@property (retain, nonatomic) NSMutableArray *poilist;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned int isEnd;
@property (retain, nonatomic) SKBuiltinBuffer_t *buff;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *logoUrl;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *openId;
@property (nonatomic) int autoQueryInterval;
@property (retain, nonatomic) NSString *searchId;

+ (void)initialize;

@end
