@class NSData, NSString;

@interface MMECInitItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int reqType;
@property (retain, nonatomic) NSData *respBuffer;
@property (nonatomic) int errcode;
@property (retain, nonatomic) NSString *errmsg;

+ (void)initialize;

- (void)setErrmsg:(id)a0;
- (id)errmsg;
- (void)setErrcode:(int)a0;
- (int)errcode;
- (void)setRespBuffer:(id)a0;
- (id)respBuffer;
- (void)setReqType:(unsigned int)a0;
- (unsigned int)reqType;

@end
