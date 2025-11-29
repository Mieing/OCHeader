@class NSString, ForwardMsgSpamDb;

@interface ForwardMsgSpamMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) ForwardMsgSpamDb *db;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)requestMsgSpam:(id)a0 commonParams:(id)a1 startHandler:(id /* block */)a2 completionHandler:(id /* block */)a3;
- (BOOL)isSafeMsg:(id)a0;
- (BOOL)isSpamMsg:(id)a0;
- (BOOL)isUnknownMsg:(id)a0;
- (void)setUsername:(id)a0 andScene:(unsigned long long)a1 andMsgId:(long long)a2 andOpenStatus:(BOOL)a3;
- (id)sInt2String:(long long)a0;
- (void).cxx_destruct;

@end
