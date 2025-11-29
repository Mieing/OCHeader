@class VoiceMessageViewModel, NSString, NSHashTable;
@protocol VoiceTransTipsHelperDelegate;

@interface VoiceTransTipsHelper : NSObject <IAudioReceiverExt, AutoPlayControllerExt, VoiceAutoTranslateExt>

@property (weak, nonatomic) id<VoiceTransTipsHelperDelegate> delegate;
@property (retain, nonatomic) NSHashTable *voiceCellTable;
@property (retain, nonatomic) VoiceMessageViewModel *tipsShowingViewModel;
@property (nonatomic) BOOL bAutoPlaying;
@property (nonatomic) BOOL bAutoTranslating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)CanShowQuickTransTips;

- (id)initWithDelegate:(id)a0;
- (float)getShowTipsMinDuration;
- (void)onViewDisappear;
- (void)tryShowTranslateTips;
- (void)onChangeVisableCells:(id)a0;
- (void)animateCleanTransTips;
- (void)onTableDidScroll:(id)a0;
- (void)OnBeginPlaying:(id)a0 success:(BOOL)a1;
- (void)OnEndPlaying:(id)a0 isForceStop:(BOOL)a1;
- (void)onAutoPlayEndWithMsg:(id)a0;
- (void)onAutoTransStart;
- (void)onAutoTransEnd:(int)a0;
- (void).cxx_destruct;

@end
