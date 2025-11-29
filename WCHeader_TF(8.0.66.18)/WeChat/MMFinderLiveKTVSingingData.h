@class NSString, LiveSEIKTVNote, LiveSEIKTVProgress, MMFinderLiveKTVReporter;
@protocol MMLiveUniqueTaskId;

@interface MMFinderLiveKTVSingingData : NSObject <MMFinderLiveKSKitAudioExt, MMFinderLiveKTVSEISyncSendDelegate>

@property (retain, nonatomic) id<MMLiveUniqueTaskId> taskId;
@property (retain) NSString *uniqueId;
@property (retain) LiveSEIKTVNote *currNoteRecord;
@property (retain) LiveSEIKTVProgress *currProgress;
@property BOOL isDataUpdated;
@property (retain) MMFinderLiveKTVReporter *reporter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)dealloc;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)updateUniqueId:(id)a0;
- (void)clearDatas;
- (void)onKSKitKalaPositionChanged:(int)a0 uniqueId:(id)a1 taskId:(id)a2;
- (void)onKSKitKalaVoiceReachNoteHeight:(float)a0 noteValue:(float)a1 isHit:(BOOL)a2 timeOffset:(int)a3 duration:(int)a4 uniqueId:(id)a5 taskId:(id)a6;
- (BOOL)onCollectKTVSEISyncSendInfo:(id)a0;
- (void)onRequestRecentKTVSEISyncSendInfo:(id)a0;
- (id)ktvReporter;
- (void).cxx_destruct;

@end
