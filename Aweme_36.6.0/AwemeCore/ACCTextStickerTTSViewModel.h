@class NSString, AWEVideoPublishViewModel, NSNumber, UIView;
@protocol ACCTextLoadingViewProtcol, AEKAudioClipOperator, AEKNewTextStickerOperator, AEKMegaEditor, AWEEditKit, ACCTextStickerTTSViewModelDelegate, ACCJsControlService;

@interface ACCTextStickerTTSViewModel : NSObject <ACCTextStickerTTSServiceProtocol>

@property (retain, nonatomic) UIView<ACCTextLoadingViewProtcol> *loadingView;
@property (nonatomic) BOOL hasLoadJSSubscribe;
@property (nonatomic) BOOL hasDidHandle;
@property (retain, nonatomic) id<AEKNewTextStickerOperator> currEditingSticker;
@property (retain, nonatomic) id<AEKAudioClipOperator> currEditingAudioClip;
@property (retain, nonatomic) NSNumber *startJsTime;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (weak, nonatomic) id<AWEEditKit> editKit;
@property (weak, nonatomic) id<ACCTextStickerTTSViewModelDelegate> delegate;
@property (weak, nonatomic) id<ACCJsControlService> jsControlService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissLoadingView;
- (void)updateStickerTTS:(id)a0 readModel:(id)a1 showLoading:(BOOL)a2 completion:(id /* block */)a3;
- (void)updateStickerTTS:(id)a0 readModel:(id)a1 completion:(id /* block */)a2;
- (BOOL)applyLocalTTSFile:(id)a0 stickerId:(id)a1 readModel:(id)a2;
- (void)cancelTextReaderRequest;
- (id)videoClipForTTSCanChangeTime;
- (id)draftRootPath;
- (id)textModelWithStickerId:(id)a0;
- (id)baseTextStickerWithId:(id)a0;
- (id)readModelForTTSWithSticker:(id)a0 stickerIdForTTSUpdate:(id)a1 ttsStashes:(id)a2;
- (id)changeTTSFromSticker:(id)a0 toSticker:(id)a1;
- (BOOL)canAddTTSWithStickerId:(id)a0;
- (BOOL)needUpdateTTS:(id)a0 forStickerId:(id)a1;
- (id)didPickTTS:(id)a0 forStickerId:(id)a1 needDeleteTTS:(BOOL)a2;
- (void)updateReadModelWithStickerId:(id)a0;
- (id)ttsSupportPunctuationMap;
- (id)textReadModelWithAudioClip:(id)a0;
- (void)updaterCaptionInfoWithSticker:(id)a0 words:(id)a1 audioClip:(id)a2;
- (BOOL)hasTTSIdBindedSticker:(id)a0;
- (void)updateTextStickerTTSModel:(id)a0 newReadModel:(id)a1 words:(id)a2;
- (void)requestTextStickerTTS:(id)a0 readModel:(id)a1 completion:(id /* block */)a2;
- (void)cancelTextStickerTTSUpdateTask:(id)a0;
- (void)deleteStickerTTSIfNeeded:(id)a0;
- (id)p_addTTSForSticker:(id)a0 withReadModel:(id)a1;
- (void)defaultHandleWithCaptionSticker:(id)a0 audioClip:(id)a1;
- (id)calculateTextSpeechRate:(id)a0 textReadModel:(id)a1;
- (id)textReadModelWithAudioUUID:(id)a0;
- (void)clientBackupHandleWithSticker:(id)a0 words:(id)a1 audioClip:(id)a2;
- (id)convertCaptionInfoList:(id)a0;
- (id)convertLineDurationList:(id)a0;
- (void)updateNLEInfoWithSticker:(id)a0 captionInfoList:(id)a1 lineDurationList:(id)a2 audioClip:(id)a3 needConsiderSpeed:(BOOL)a4;
- (void)trackTextTTSWordMatchWithExtraParam:(id)a0;
- (void)resetCurrEditing;
- (id)convertWords:(id)a0;
- (BOOL)matchCaptionInfoWithSticker:(id)a0 words:(id)a1 audioClip:(id)a2;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })clipRangeWithStart:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 audioDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;

@end
