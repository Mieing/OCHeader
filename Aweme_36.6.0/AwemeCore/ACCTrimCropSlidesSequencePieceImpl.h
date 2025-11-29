@class NLEInterface_OC, ACCTrimCropSlidesMediaPlayer, NSArray, ACCCameraSubscription, AWEVideoPublishViewModel, ACCSequenceSwitchProxy, NSString, NSMutableSet;
@protocol ACCTrimCropMediaPlayerProtocol, ACCSequenceEditServiceProtocol, ACCTrimCropEditorConfigProtocol;

@interface ACCTrimCropSlidesSequencePieceImpl : NSObject <ACCSequenceEditServicePlayerSubscriber, ACCTrimCropSequencePieceServiceProtocol>

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) NLEInterface_OC *cropEditorNLE;
@property (retain, nonatomic) ACCTrimCropSlidesMediaPlayer *player;
@property (copy, nonatomic) NSArray *pieceArray;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (copy, nonatomic) id /* block */ copyPieceHandler;
@property (copy, nonatomic) id /* block */ copyPieceCompletion;
@property (copy, nonatomic) id /* block */ commitRenderCompletion;
@property (retain, nonatomic) NSMutableSet *replicaModeVisitedPieceSet;
@property (weak, nonatomic) id<ACCTrimCropEditorConfigProtocol> editorConfig;
@property (retain, nonatomic) ACCSequenceSwitchProxy *pieceProxy;
@property (weak, nonatomic) ACCSequenceSwitchProxy *trimProxy;
@property (weak, nonatomic) ACCSequenceSwitchProxy *cropProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, nonatomic) id<ACCTrimCropMediaPlayerProtocol> mediaPlayer;
@property (readonly, nonatomic) BOOL isPieceDeletable;
@property (readonly, nonatomic) BOOL isTimeLabelShown;
@property (readonly, nonatomic) BOOL isAllowTrim;
@property (readonly, nonatomic) BOOL isCurrentPieceDeletable;

- (void)sequenceEditService:(id)a0 didTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void)sequenceEditService:(id)a0 changedWithAddedIndexSet:(id)a1 deletedIndexSet:(id)a2;
- (void)sequenceEditService:(id)a0 willTransferToIndex:(long long)a1 editMode:(unsigned long long)a2 isAutoTransfer:(BOOL)a3;
- (void)sequenceEditService:(id)a0 viewScrollToIndex:(long long)a1;
- (void)switchNext;
- (void)removePieceAtIndexs:(id)a0;
- (void)buildSequencePieceService;
- (void)copySequencePieces:(id /* block */)a0 copyPieceCompletion:(id /* block */)a1 commitRenderCompletion:(id /* block */)a2;
- (void)syncSequencePieceCopies:(id /* block */)a0 completion:(id /* block */)a1;
- (void)resetCurrentPieceWithCopyHandler:(id /* block */)a0 completion:(id /* block */)a1;
- (void)makeSequencePiecesCopyDone;
- (void)switchPrevious;
- (void)switchPieceToIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)movePieceAtIndex:(unsigned long long)a0 toIndex:(unsigned long long)a1;
- (void)addPieceWithAssets:(id)a0 atIndex:(unsigned long long)a1;
- (void)lockSegmentSeekWithId:(id)a0;
- (void)unlockSegmentSeek;
- (void)clearPieceCache;
- (id)initWithEditService:(id)a0 viewModel:(id)a1;
- (void)makePieceCopyDoneWithPiece:(id)a0;
- (id)pieceWithUUID:(id)a0 trimEditor:(id)a1 cropEditor:(id)a2 project:(id)a3;
- (void)copyPiece:(id)a0 withProject:(id)a1 copyDone:(BOOL)a2;
- (void)copyPieceWithIndex:(long long)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
