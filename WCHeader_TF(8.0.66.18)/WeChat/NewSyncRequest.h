@class CmdList, SKBuiltinBuffer_t, NSString;

@interface NewSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) CmdList *oplog;
@property (nonatomic) unsigned int selector;
@property (retain, nonatomic) SKBuiltinBuffer_t *keyBuf;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *deviceType;
@property (nonatomic) unsigned int syncMsgDigest;
@property (nonatomic) unsigned long long prevDownloadFlag;
@property (retain, nonatomic) SKBuiltinBuffer_t *syncUniqKeyBuf;

+ (void)initialize;

- (void)setSyncUniqKeyBuf:(id)a0;
- (id)syncUniqKeyBuf;
- (void)setPrevDownloadFlag:(unsigned long long)a0;
- (unsigned long long)prevDownloadFlag;
- (void)setSyncMsgDigest:(unsigned int)a0;
- (unsigned int)syncMsgDigest;
- (void)setDeviceType:(id)a0;
- (id)deviceType;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setKeyBuf:(id)a0;
- (id)keyBuf;
- (void)setSelector:(unsigned int)a0;
- (unsigned int)selector;
- (void)setOplog:(id)a0;
- (id)oplog;

@end
