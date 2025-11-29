@class NSData;

@interface BypFinderNotify : WXPBGeneratedMessage

@property (nonatomic) unsigned int cmdId;
@property (retain, nonatomic) NSData *cmdBuff;
@property (nonatomic) unsigned long long cmdIdSet;

+ (void)initialize;

- (void)setCmdIdSet:(unsigned long long)a0;
- (unsigned long long)cmdIdSet;
- (void)setCmdBuff:(id)a0;
- (id)cmdBuff;
- (void)setCmdId:(unsigned int)a0;
- (unsigned int)cmdId;

@end
