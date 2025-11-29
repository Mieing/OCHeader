@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEAdActionMaskDetailService : HTSService <AWEGokuPluginTargetProtocol, AWEAdActionMaskDetailService>

@property (retain, nonatomic) NSMutableDictionary *interactiveDic;
@property (retain, nonatomic) NSMutableDictionary *actionMaskInfoDict;
@property (retain, nonatomic) NSMutableArray *interactiveIdArrays;
@property (nonatomic) long long maxCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)logInteractiveEvent:(unsigned long long)a0 with:(id)a1 from:(id)a2;
- (id)actionMaskDetailStrParam;
- (void)logNoInteractiveEvent:(id)a0;
- (void)didChangePlaybackStateWithAction:(id)a0;
- (void)awemePlayerWillLoopPlayingWith:(id)a0;
- (id)actionMaskDetailStrParamCount:(long long)a0;
- (void)deleteOldValue;
- (id)actionMaskInfoParamCount:(long long)a0;
- (void)updateValue:(unsigned long long)a0 awemeModel:(id)a1;
- (void)updateActionMaskInfoWithScene:(unsigned long long)a0 context:(id)a1;
- (id)actionMaskInfoParam;
- (void).cxx_destruct;
- (unsigned long long)moduleNames;
- (unsigned long long)getValue:(id)a0;

@end
