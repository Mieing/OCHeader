@class NSString, HTSEventContext, IESLiveStickerNewModel, IESLiveStickerApi, IESLiveStickerItemNewModel;
@protocol IESLiveRoomService, IESLiveMonitor;

@interface IESLiveAnchorStickerViewModel : NSObject <IESLiveStickerAnchorActions>

@property (retain, nonatomic) IESLiveStickerApi *stickerApi;
@property (retain, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) double textStickerStartUseTime;
@property (nonatomic) double imageSticerkStartUseTime;
@property (nonatomic) BOOL isStickerListRequesting;
@property (nonatomic) BOOL isStickerListFailed;
@property (retain, nonatomic) NSString *stickerIdForJsbAdd;
@property (copy, nonatomic) id /* block */ jsbAddStickerBlock;
@property (retain, nonatomic) NSString *stickerIdForJsbRemove;
@property (copy, nonatomic) id /* block */ jsbRemoveStickerBlock;
@property (retain, nonatomic) NSString *stickerIdForJsbStickerInfo;
@property (copy, nonatomic) id /* block */ jsbStickerInfoBlock;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveStickerNewModel *stickerModel;
@property (retain, nonatomic) IESLiveStickerItemNewModel *imageStickerModel;
@property (retain, nonatomic) IESLiveStickerItemNewModel *textStickerModel;
@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (copy, nonatomic) id /* block */ hideKeyBoardBlock;
@property (copy, nonatomic) NSString *contentInAudit;
@property (nonatomic) BOOL isInAudit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackParams;
- (void)didSetAttachingDIContext;
- (id)initWithRoomModel:(id)a0;
- (BOOL)canOperateStickerAndShowToastIfNeeded;
- (void)getStickerInfoWithStickerId:(id)a0 completion:(id /* block */)a1;
- (void)addSticker:(id)a0 completion:(id /* block */)a1;
- (void)removeSticker:(id)a0 completion:(id /* block */)a1;
- (void)requestStickerListWithCallback:(id /* block */)a0;
- (void)updateTextStickerContent:(id)a0;
- (void)updateUseSticker:(id)a0;
- (void)deleteSticker:(id)a0;
- (void)stickerViewMoving:(id)a0;
- (void)stickerViewMoveEnd:(id)a0;
- (void)uploadStickers;
- (void)hideCurrentSticer;
- (void)resumeCurrentSticker;
- (void)handleNoticeMessage:(id)a0;
- (void)trackStickerTotalUseTime;
- (id)checkJSBWithStickerId:(id)a0 checkOperateSticker:(BOOL)a1;
- (void)handleStickerInfoWithStickerId:(id)a0 completion:(id /* block */)a1;
- (void)handleAddSticker:(id)a0 completion:(id /* block */)a1;
- (void)useAnchorImageSticker:(id)a0;
- (void)useAnchorTextSticker:(id)a0;
- (void)handleRemoveSticker:(id)a0 completion:(id /* block */)a1;
- (void)showPassedSticker;
- (void)handleFetchStickerListFinished;
- (void)removeAnchorTextSticker;
- (void)removeAnchorImageSticker;
- (void)trackTextStickerUsedTime;
- (void)trackImageStickerUsedTime;
- (void).cxx_destruct;

@end
