@class NSString, NSMutableDictionary;

@interface MMFinderLiveFeedPreviewKTVMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *ktvBoxDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initDatas;
- (void)clearDatas;
- (id)getKTVBoxWithTaskId:(id)a0;
- (void)clearKTVBoxWithTaskId:(id)a0;
- (void).cxx_destruct;

@end
