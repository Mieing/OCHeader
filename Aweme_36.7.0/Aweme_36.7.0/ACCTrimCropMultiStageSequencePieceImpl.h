@class NLEInterface_OC, ACCTrimCropMultiStageMediaPlayer, NSString, ACCCameraSubscription, AWEVideoPublishViewModel, ACCSequenceSwitchProxy, NSDictionary, NSArray;
@protocol ACCTrimCropMediaPlayerProtocol, ACCSequenceEditServiceProtocol, ACCTrimEditAudioServiceProtocol;

@interface ACCTrimCropMultiStageSequencePieceImpl : NSObject <ACCEditPreviewMessageProtocol, ACCTrimCropSequencePieceServiceProtocol>

@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) NLEInterface_OC *cropEditorNLE;
@property (retain, nonatomic) ACCTrimCropMultiStageMediaPlayer *player;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) double currentPlayerTime;
@property (retain, nonatomic) NSDictionary *slotUUIDToIdexDic;
@property (nonatomic) BOOL isLockActive;
@property (copy, nonatomic) id /* block */ copyPieceHandler;
@property (copy, nonatomic) id /* block */ copyPieceCompletion;
@property (copy, nonatomic) id /* block */ commitRenderCompletion;
@property (retain, nonatomic) ACCSequenceSwitchProxy *pieceProxy;
@property (weak, nonatomic) id<ACCTrimEditAudioServiceProtocol> audioService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long index;
@property (readonly, copy, nonatomic) NSString *uuid;
@property (readonly, copy, nonatomic) NSArray *pieceArray;
@property (readonly, nonatomic) id<ACCTrimCropMediaPlayerProtocol> mediaPlayer;
@property (readonly, nonatomic) BOOL isPieceDeletable;
@property (readonly, nonatomic) BOOL isTimeLabelShown;
@property (readonly, nonatomic) BOOL isAllowTrim;
@property (readonly, nonatomic) BOOL isCurrentPieceDeletable;

- (void)playerCurrentPlayTimeChanged:(double)a0;
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
- (id)pieceWithNLE:(id)a0 slot:(id)a1 uuid:(id)a2 idx:(unsigned long long)a3;
- (void)copyPiece:(id)a0 copyDone:(BOOL)a1;
- (void)makePieceCopyDoneWithPiece:(id)a0;
- (void)switchPieceToIndex:(unsigned long long)a0 animated:(BOOL)a1 isAutoTransfer:(BOOL)a2 force:(BOOL)a3;
- (void)p_switchPieceToIndex:(unsigned long long)a0 animated:(BOOL)a1 isAutoTransfer:(BOOL)a2 force:(BOOL)a3;
- (void)updatePieceTrimCropEditorIdx;
- (void)trackEventMoveDuration:(double)a0;
- (long long)indexForSlot:(id)a0;
- (void)seekToCurrentPlayerTime;
- (BOOL)time:(double)a0 isEqualTo:(double)a1;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })timePerFrame;

@end
