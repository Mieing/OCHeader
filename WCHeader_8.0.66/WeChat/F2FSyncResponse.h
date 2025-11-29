@class NSMutableArray, BaseResponse;

@interface F2FSyncResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned long long sessionId;
@property (nonatomic) unsigned long long key;
@property (retain, nonatomic) NSMutableArray *xchgList;

+ (void)initialize;

@end
