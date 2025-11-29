@class NSString, NSMutableDictionary, AWEVideoPublishViewModel;
@protocol ACCSequenceEditServiceProtocol, IESServiceProvider, ACCTrimCropSequencePieceServiceProtocol, ACCTrimCropPieceProtocol, ACCEditTextReaderServiceProtocol, ACCEditServiceProtocol;

@interface ACCTrimCropMultiStageAudioServiceImpl : NSObject <ACCTrimEditAudioServiceProtocol>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCEditTextReaderServiceProtocol> editTextReaderService;
@property (weak, nonatomic) id<ACCTrimCropPieceProtocol> piece;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) NSMutableDictionary *textReadingAssets;
@property (retain, nonatomic) NSMutableDictionary *textReadingRanges;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateBGMClipRange;
- (void)updateTextReadAudioClipRange;
- (void)syncTextReadData;
- (void)updateAudioClipRange;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;

@end
