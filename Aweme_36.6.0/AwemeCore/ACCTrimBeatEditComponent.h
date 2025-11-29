@class NSString, ACCTrimCropBarItem;
@protocol ACCTrimBeatEditServiceProtocol, ACCTrimCropSequencePieceServiceProtocol, ACCAdvanceEditMainTrackActionServiceProtocol, ACCTrimCropEditorFlagProtocol, ACCEditServiceProtocol;

@interface ACCTrimBeatEditComponent : ACCTrimCropBaseComponent <ACCTrimBeatEditServiceDelegate>

@property (retain, nonatomic) ACCTrimCropBarItem *barItem;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCTrimBeatEditServiceProtocol> beatService;
@property (weak, nonatomic) id<ACCAdvanceEditMainTrackActionServiceProtocol> mainTrackActionService;
@property (weak, nonatomic) id<ACCTrimCropEditorFlagProtocol> editorFlagService;
@property (nonatomic) BOOL isSlidesAndMusicDisableBeat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)setupObserver;
- (void)componentDidLoad;
- (void)musicBeatStateChange:(BOOL)a0;
- (void).cxx_destruct;
- (void)initData;

@end
