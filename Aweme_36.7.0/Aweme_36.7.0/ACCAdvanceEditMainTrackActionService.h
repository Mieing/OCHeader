@class NSString, NSHashTable;

@interface ACCAdvanceEditMainTrackActionService : NSObject <ACCAdvanceEditMainTrackActionServiceProtocol>

@property (retain, nonatomic) NSHashTable *listenerArray;
@property (copy, nonatomic) id /* block */ simulateClickBlock;
@property (nonatomic) BOOL isMainTrackExtended;
@property (nonatomic) BOOL isExtendScrolling;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)simulateClickCurrentPiece;
- (void)notifyAddButtonAction;
- (void)notifyMainTrackExtendAction;
- (void)notifyMainTrackStoreAction;
- (void)notifyMainTrackLongPressBeginAction;
- (void)notifyMainTrackLongPressEndAction;
- (void)notifyTrimMaterialTimeRangeAction;
- (void)setSimulationBlockForClickCurrentPiece:(id /* block */)a0;
- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (void)addListener:(id)a0;
- (void)clearListener;

@end
