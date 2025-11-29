@class NSArray, NSString, NSMutableSet, NSMutableArray;
@protocol IESLiveSEISenderService, IESLiveRoomService, IESLiveAudioSubtitleASRServiceActions;

@interface IESLiveAudioSubtitleASRService : NSObject <IESLiveInteractSubtitleCallbackReceiver, IESLiveInteractionLinkerServiceAction, IESLiveSEIListener>

@property (nonatomic) BOOL didJoinChannel;
@property (copy, nonatomic) NSArray *originalSubtitles;
@property (retain, nonatomic) NSMutableArray *filterActions;
@property (nonatomic) BOOL couldReceiveBackupSEI;
@property (retain, nonatomic) NSMutableSet *pausedReason;
@property (weak, nonatomic) id<IESLiveAudioSubtitleASRServiceActions> actions;
@property (weak, nonatomic) id<IESLiveSEISenderService> seiService;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) BOOL isAsrRunning;
@property (nonatomic) BOOL isSEIRunning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (unsigned long long)supportSeiTypes;
- (void)onParseredWithSEIResult:(id)a0;
- (BOOL)enableBackupSEI;
- (void)onSubtitleStateChanged:(id)a0;
- (void)onSubtitleMessageReceived:(id)a0;
- (void)interactionLinkerServicePreStartInteract:(id)a0;
- (void)interactionLinkerServiceInteractDidStart:(id)a0;
- (void)interactionLinkerServiceInteractWillEnd:(id)a0;
- (void)startAsrIfNeeded;
- (void)stopAsrIfNeeded;
- (BOOL)isSameSubtitleWithCurrent:(id)a0;
- (void)notifySubtitleUpdate:(id)a0;
- (void)addFilterAction:(id /* block */)a0;
- (void)pauseBy:(unsigned long long)a0;
- (void)resumeBy:(unsigned long long)a0;
- (BOOL)isPausedBy:(unsigned long long)a0;
- (void)startSEIListener;
- (void)stopSEIListener;
- (void).cxx_destruct;
- (void)stop;
- (void)start;

@end
