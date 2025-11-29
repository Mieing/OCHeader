@class NSData;

@interface ReliableSyncItem : WXPBGeneratedMessage

@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSData *cmdBuf;

+ (void)initialize;

- (void)setCmdBuf:(id)a0;
- (id)cmdBuf;
- (void)setCmdId:(unsigned int)a0;
- (unsigned int)cmdId;

@end
