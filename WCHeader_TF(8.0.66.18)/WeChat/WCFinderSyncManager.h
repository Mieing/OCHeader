@class NSMutableDictionary, NSString, NSData, FinderSyncRequest, NSMutableArray;

@interface WCFinderSyncManager : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *md5List;
@property (retain, nonatomic) NSMutableArray *syncRequestArray;
@property (retain, nonatomic) FinderSyncRequest *currentSyncRequest;
@property (retain, nonatomic) NSData *lastBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)updateSyncBuffer;
- (BOOL)checkSyncSelectorCanIgnore:(id)a0;
- (void)syncWithRequest:(id)a0;
- (void)checkQueue;
- (void)_syncWithRequest:(id)a0;
- (void)mockCgiFailAction:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
