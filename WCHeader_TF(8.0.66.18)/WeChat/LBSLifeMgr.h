@class NSString, SKBuiltinBuffer_t;

@interface LBSLifeMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (retain, nonatomic) SKBuiltinBuffer_t *getBuff;
@property (retain, nonatomic) SKBuiltinBuffer_t *searchBuff;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (int)getLBSLife:(id)a0 StartFromFirst:(BOOL)a1 Scene:(unsigned int)a2 EntryTime:(unsigned int)a3;
- (int)getLBSLife:(id)a0 StartFromFirst:(BOOL)a1 Scene:(unsigned int)a2 EntryTime:(unsigned int)a3 eventIdLdr:(unsigned int *)a4;
- (int)autoSearchLBSLife:(id)a0;
- (int)continueSearchLBSLife:(id)a0;
- (int)getLBSLifeDetail:(id)a0;
- (void)handleGetLifeListResponse:(id)a0 eventId:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
