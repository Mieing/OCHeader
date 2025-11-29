@class OrderedDictionary, NSMutableDictionary, NSString;

@interface MMFinderLiveInfoMgr : MMUserService <MMServiceProtocol>

@property (retain, nonatomic) OrderedDictionary *liveInfoWrapDict;
@property (retain, nonatomic) NSMutableDictionary *fetchLiveActivityFinderDataItemDict;
@property (nonatomic) double nextFetchLiveActivityInterval;
@property (retain, nonatomic) NSMutableDictionary *fetchNavLiveHomePageDataItemDict;
@property (nonatomic) double nextFetchNavLiveHomePageStatusInterval;
@property (nonatomic) BOOL isInBackground;
@property (retain, nonatomic) OrderedDictionary *cachedAudioRoomBackgroundImageInfoDict;
@property (retain, nonatomic) NSMutableDictionary *waitResultAudioRoomBackgroundImageInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)updateFinderLiveInfo:(id)a0 withObjectId:(unsigned long long)a1;
- (void)updateFinderLiveInfo:(id)a0 withTid:(id)a1;
- (void)updateFinderLiveInfo:(id)a0 withTid:(id)a1 updateActivityType:(BOOL)a2;
- (unsigned long long)getFinderLiveActivityTypeFromList:(id)a0;
- (void)updateFinderLiveActivityType:(id)a0 withObjectId:(unsigned long long)a1;
- (void)updateFinderLiveActivityType:(id)a0 withTid:(id)a1;
- (void)markFinderLiveEndWithObjectId:(unsigned long long)a0;
- (void)markFinderLiveEndWithTid:(id)a0;
- (unsigned long long)getFinderLiveActivityTypeByTid:(id)a0;
- (void)registerFetchLiveActivityWithFinderDataItem:(id)a0;
- (void)unregisterFetchLiveActivityWithFinderDataItem:(id)a0;
- (void)delayBatchGetLiveActivity;
- (id)allRegisteredFetchLiveActivityDataItems;
- (void)batchGetLiveActivity;
- (void)registerFetchNavLiveHomePageStatusWithFinderDataItem:(id)a0;
- (void)unregisterFetchNavLiveHomePageStatusWithFinderDataItem:(id)a0;
- (void)delayBatchGetNavLiveStatus;
- (id)allRegisteredFetchNavLiveHomePageStatusDataItems;
- (void)unregisterFetchAllNavLiveHomePageStatus;
- (void)batchGetNavLiveStatus;
- (void)updateFinderNavLiveHomePageStatus:(id)a0 withTid:(id)a1;
- (id)generateFinderLiveStreamTypeInfoWithLiveInfo:(id)a0;
- (id)getFinderLiveStreamTypeInfoByTid:(id)a0 withLiveInfo:(id)a1;
- (void)updateFinderLiveStreamTypeInfo:(id)a0 withTid:(id)a1;
- (void)updateFinderLiveStreamTypeInfoWithMicSEIMsg:(id)a0 isAudioMode:(BOOL)a1 andTid:(id)a2;
- (void)markStartCalcAudioRoomBackgroundImageWithOriginalUrlString:(id)a0;
- (void)updateAudioRoomBackgroundImage:(id)a0 audioWaveColor:(id)a1 originalUrlString:(id)a2;
- (id)getAudioRoomBackgroundImageInfoWithOriginalUrlString:(id)a0;
- (void).cxx_destruct;

@end
