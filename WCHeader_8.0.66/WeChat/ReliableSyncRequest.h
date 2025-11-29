@class BaseRequest, NSMutableArray, NSData;

@interface ReliableSyncRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSMutableArray *selector;
@property (retain, nonatomic) NSData *cliSyncKeyBuff;
@property (retain, nonatomic) NSData *migrateSyncKeyBuff;

+ (void)initialize;

- (void)setMigrateSyncKeyBuff:(id)a0;
- (id)migrateSyncKeyBuff;
- (void)setCliSyncKeyBuff:(id)a0;
- (id)cliSyncKeyBuff;
- (void)setSelector:(id)a0;
- (id)selector;
- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
