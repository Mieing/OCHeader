@class NSString;
@protocol ACCAdvanceEditMainTrackActionServiceProtocol, ACCTrimCropSequencePieceServiceProtocol, ACCTrimCropPieceAddProtocol, ACCTCETrackEventServiceProtocol;

@interface ACCTrimCropAddPieceComponent : ACCTrimCropBaseComponent <ACCAdvanceEditMainTrackActionDelegate>

@property (weak, nonatomic) id<ACCAdvanceEditMainTrackActionServiceProtocol> mainTrackActionService;
@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTrimCropPieceAddProtocol> pieceAdder;
@property (weak, nonatomic) id<ACCTCETrackEventServiceProtocol> trackEventService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidLoad;
- (void)addButtonDidClickedByUser;
- (void).cxx_destruct;

@end
