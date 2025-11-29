@class NSString, RACSignal, RACSubject, AWEVideoPublishViewModel;

@interface ACCEditLyricStickerViewModel : NSObject <ACCLyricsStickerServiceProtocol>

@property (retain, nonatomic) RACSubject *addClipViewSubject;
@property (retain, nonatomic) RACSubject *showClipViewSubject;
@property (retain, nonatomic) RACSubject *didFinishCutMusicSubject;
@property (retain, nonatomic) RACSubject *didSelectMusicSubject;
@property (retain, nonatomic) RACSubject *updateMusicRelateUISubject;
@property (retain, nonatomic) RACSubject *updateLyricsStickerButtonSubject;
@property (retain, nonatomic) RACSignal *willShowLyricMusicSelectPanelSignal;
@property (retain, nonatomic) RACSubject *willShowLyricMusicSelectPanelSubject;
@property (retain, nonatomic) RACSignal *didCancelLyricMusicSelectSignal;
@property (retain, nonatomic) RACSubject *didCancelLyricMusicSelectSubject;
@property (retain, nonatomic) RACSubject *removeBindChallengeSubject;
@property (retain, nonatomic) RACSubject *bindChallengeSubject;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (nonatomic) BOOL musicLyricVCPresented;
@property (readonly, nonatomic) BOOL hasAlreadyAddLyricSticker;
@property (copy, nonatomic) id /* block */ removeLyricSticker;
@property (readonly, nonatomic) RACSignal *addClipViewSignal;
@property (readonly, nonatomic) RACSignal *showClipViewSignal;
@property (readonly, nonatomic) RACSignal *didFinishCutMusicSignal;
@property (readonly, nonatomic) RACSignal *didSelectMusicSignal;
@property (readonly, nonatomic) RACSignal *updateMusicRelateUISignal;
@property (readonly, nonatomic) RACSignal *updateLyricsStickerButtonSignal;
@property (readonly, nonatomic) RACSignal *removeBindChallengeSignal;
@property (readonly, nonatomic) RACSignal *bindChallengeSignal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeMusicLyricSticker;
- (void)sendUpdateLyricsStickerButtonSignal:(long long)a0;
- (void)sendWillShowLyricMusicSelectPanelSignal;
- (void)sendDidCancelLyricMusicSelectSignal;
- (void)sendDidSelectMusicSignal:(id)a0;
- (void)sendUpdateMusicRelateUISignal;
- (void)sendBindChallengeSignalWithChallengeId:(id)a0 moduleKey:(id)a1;
- (void)sendRemoveBindChallengeSignalWithModuleKey:(id)a0;
- (void)sendAddClipViewSignal;
- (void)sendShowClipViewSignal;
- (void)sendDidFinishCutMusicSignal:(struct _HTSAudioRange { double x0; double x1; })a0 repeatCount:(long long)a1;
- (id)initWithRepositry:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
