@class ACCTCETrimAdjustEditService, ACCTrimCropBarItem, NSString;
@protocol ACCTrimCropPieceProtocol, ACCTrimCropBottomBarServiceProtocol, ACCTrimCropSequencePieceServiceProtocol;

@interface ACCTrimAdjustEditComponent : ACCTrimCropBaseComponent <ACCTrimCropSequencePieceServiceListener, ACCTCETrimAdjustEditActionDelegate>

@property (weak, nonatomic) id<ACCTrimCropSequencePieceServiceProtocol> sequencePieceService;
@property (weak, nonatomic) id<ACCTrimCropPieceProtocol> piece;
@property (weak, nonatomic) id<ACCTrimCropBottomBarServiceProtocol> bottomBarService;
@property (retain, nonatomic) ACCTrimCropBarItem *barItem;
@property (retain, nonatomic) ACCTCETrimAdjustEditService *adjustEditService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)showPanel:(id)a0;
- (id)serviceBinding;
- (void)componentDidLoad;
- (void)sequencePieceService:(id)a0 didTransferToIndex:(long long)a1 isAutoTransfer:(BOOL)a2;
- (void)adjustClipRangePanelDismiss;
- (void)updateAdjustBarState;
- (void)showClipRangePanel;
- (void).cxx_destruct;

@end
