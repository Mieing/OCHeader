@class NSMutableArray, BaseResponse;

@interface F2FAnswerResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned long long key;
@property (retain, nonatomic) NSMutableArray *xchgList;
@property (nonatomic) unsigned int syncInterval;

+ (void)initialize;

@end
