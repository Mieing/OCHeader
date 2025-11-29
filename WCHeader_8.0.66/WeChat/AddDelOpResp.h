@class NSMutableArray, BaseResponse;

@interface AddDelOpResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseresponse;
@property (nonatomic) BOOL needSync;
@property (nonatomic) unsigned long long maxDelOpVersion;
@property (retain, nonatomic) NSMutableArray *delOp;

+ (void)initialize;

@end
