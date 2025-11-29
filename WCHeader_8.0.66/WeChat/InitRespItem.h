@class NSData, NSString;

@interface InitRespItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int initCmd;
@property (retain, nonatomic) NSData *respBuffer;
@property (nonatomic) unsigned long long nextReqTimestamp;
@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *errmsg;

+ (void)initialize;

- (void)setErrmsg:(id)a0;
- (id)errmsg;
- (void)setErrcode:(int)a0;
- (int)errcode;
- (void)setNextReqTimestamp:(unsigned long long)a0;
- (unsigned long long)nextReqTimestamp;
- (void)setRespBuffer:(id)a0;
- (id)respBuffer;
- (void)setInitCmd:(unsigned int)a0;
- (unsigned int)initCmd;

@end
