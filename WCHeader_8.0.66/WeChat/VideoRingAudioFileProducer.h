@class NSString, NSMutableDictionary, VideoRingNetProvider;

@interface VideoRingAudioFileProducer : MMUserService <VideRingModifyExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *downloadTasks;
@property (retain, nonatomic) VideoRingNetProvider *provider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)produceAudioFileWithRingBack:(id)a0;
- (void)storageVibrateFileForLongTerm:(id)a0;
- (void)onGlobalRingModified:(id)a0 opType:(unsigned long long)a1;
- (void)onExclusiveRingModified:(id)a0 opType:(unsigned long long)a1;
- (void)checkNotificationRingFileForRingDetail:(id)a0;
- (void).cxx_destruct;

@end
