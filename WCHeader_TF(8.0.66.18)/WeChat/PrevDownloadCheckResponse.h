@class NSMutableArray, BaseResponse;

@interface PrevDownloadCheckResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *bizResps;
@property (nonatomic) unsigned long long nextReqTimeMs;

+ (void)initialize;

- (void)setNextReqTimeMs:(unsigned long long)a0;
- (unsigned long long)nextReqTimeMs;
- (void)setBizResps:(id)a0;
- (id)bizResps;
- (void)setBaseResponse:(id)a0;
- (id)baseResponse;

@end
