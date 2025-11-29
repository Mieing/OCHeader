@class NSString, AWEVideoPublishViewModel, UIView;
@protocol ACCStickerProtocol;

@interface ACCVideoCommentStickerHandler : ACCStickerHandler <ACCStickerMigrationProtocol, ACCShootSameStickerHandlerProtocol>

@property (retain, nonatomic) UIView<ACCStickerProtocol> *stickerWrapView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (copy, nonatomic) id /* block */ onSelectTimeCallback;
@property (copy, nonatomic) id /* block */ willDeleteCallback;
@property (nonatomic) BOOL isRecord;

+ (void)updateUserInfo:(id *)a0 repoModel:(id)a1 byCrossPlatformSlot:(id)a2;
+ (BOOL)fillCrossPlatformStickerByUserInfo:(id)a0 repository:(id)a1 context:(id)a2 sticker:(id *)a3;

- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (BOOL)canHandleSticker:(id)a0;
- (void)apply:(id)a0 index:(unsigned long long)a1 doRender:(BOOL)a2;
- (void)applyAsNleVirtualSticker:(id)a0 index:(unsigned long long)a1;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (id)createStickerViewWithShootSameStickerModel:(id)a0 isInRecorder:(BOOL)a1;
- (void)updateLocationModelWithShootSameStickerModel:(id)a0;
- (struct CGPoint { double x0; double x1; })getTopLeftPosition;
- (void)p_addInteractionStickerInfoWith:(id)a0 toArray:(id)a1 idx:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)reset;

@end
