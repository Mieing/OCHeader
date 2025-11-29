@class RingTonePlaySoundReporter_23613, NSString, RingBackPlaySoundReporter_23653, RingToneDetail, VideoRingNetProvider, MMUIViewController, RingBackInfoDisplaySheetView, AnyPromise, CContact, RingToneAvPlayer;

@interface RingBackSoundCoordinator : NSObject <RingBackInfoDisplaySheetViewDelegate, SystemVolumeExt>

@property (retain, nonatomic) VideoRingNetProvider *provider;
@property (retain, nonatomic) CContact *contact;
@property (nonatomic) BOOL isCaller;
@property (retain, nonatomic) RingToneAvPlayer *player;
@property (retain, nonatomic) RingToneDetail *ringDetail;
@property (retain, nonatomic) RingBackInfoDisplaySheetView *sheetView;
@property (retain, nonatomic) AnyPromise *ringFilePromise;
@property (retain, nonatomic) RingTonePlaySoundReporter_23613 *ringToneReporter;
@property (retain, nonatomic) RingBackPlaySoundReporter_23653 *ringBackReporter;
@property (nonatomic) BOOL hasResetSpeakerVolume;
@property (nonatomic) BOOL hasResetReceiverVolume;
@property (nonatomic) BOOL isAudio;
@property (nonatomic) float originalVolumeValue;
@property (nonatomic) BOOL isOrignalVolumeValueQueried;
@property (nonatomic) float defaultVolume;
@property (nonatomic) BOOL isEnd;
@property (nonatomic) unsigned long long entryType;
@property (copy, nonatomic) NSString *chatroomUsername;
@property (weak, nonatomic) MMUIViewController *viewController;
@property (copy, nonatomic) id /* block */ jumpBlock;
@property (nonatomic) BOOL hasShowRingBackInfoView;
@property (nonatomic) unsigned long long roomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 selfIsCaller:(BOOL)a1 isAudio:(BOOL)a2;
- (id)init;
- (void)commonInit;
- (void)dealloc;
- (id)playRingBackSound;
- (void)playRingToneSound;
- (void)clear:(BOOL)a0;
- (void)vibrate;
- (id)getRingToneTitle;
- (id)getFriendRingDetail;
- (id)getAudiaoFileAndCheckUpdate;
- (id)getAudiaoFile;
- (id)doPromise:(id)a0 withinTime:(double)a1;
- (void)playLocalRingFile;
- (void)showRingBackInfoView;
- (BOOL)isCalled;
- (void)checklistenedNewRingBack;
- (void)notificationRingReportRegister;
- (void)ringBackReporterInit;
- (void)ringToneReporterInit;
- (id)genRingToneReporter;
- (float)getRingVolume;
- (void)setRingVolume:(float)a0;
- (void)restoreOriginalVolume;
- (void)__resetVolume;
- (void)resetSpeakerVolume;
- (void)resetReceiverVolume;
- (void)pause;
- (void)resume;
- (void)setMute:(BOOL)a0;
- (void)restart;
- (void)onRingToneJumpToAuthorPage;
- (id)getCurrentNavigationController;
- (void)onSystemVolumeChangeFrom:(float)a0 to:(float)a1 reason:(int)a2;
- (void).cxx_destruct;

@end
