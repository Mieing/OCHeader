@class NSString, NSMutableArray;

@interface MCSBrandContactMgr : NSObject <MMConfigMgrExt> {
    NSMutableArray *_arrMCSItems;
    unsigned int _lastUpdateTime;
    BOOL _bNeedSave;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)initData;
- (void)setDeclineFactor;
- (void)tryUpdateData;
- (void)cleanData;
- (id)getMCSArray;
- (void)removeItem:(id)a0;
- (void)onSelectContact:(id)a0;
- (void)addScore:(id)a0;
- (id)pathForMCSFile;
- (void)loadLocalData;
- (void)trySaveData;
- (void)onEnterBackGround;
- (void)onClearData;
- (void)onAppTerminate;
- (void)onMMDynamicConfigUpdated;
- (void).cxx_destruct;

@end
