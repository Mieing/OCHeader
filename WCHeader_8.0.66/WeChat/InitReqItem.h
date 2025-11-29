@class NSData;

@interface InitReqItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int initCmd;
@property (retain, nonatomic) NSData *cmdParams;

+ (void)initialize;

- (void)setCmdParams:(id)a0;
- (id)cmdParams;
- (void)setInitCmd:(unsigned int)a0;
- (unsigned int)initCmd;

@end
