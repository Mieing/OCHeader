@class NSData, NSMutableArray, BaseResponse;

@interface QueryAsyncTTSResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) BOOL finish;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *contextBuff;
@property (retain, nonatomic) NSMutableArray *audioExtInfo;
@property (nonatomic) unsigned int interval;

+ (void)initialize;

@end
