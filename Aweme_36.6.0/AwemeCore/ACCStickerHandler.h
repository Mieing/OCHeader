@class ACCStickerContainerView, UIView;
@protocol ACCStickerLogger, ACCEditStickerProtocol, ACCStickerPlayerApplying;

@interface ACCStickerHandler : NSObject

@property (copy, nonatomic) id /* block */ stickerContainerLoader;
@property (weak, nonatomic) UIView *uiContainerView;
@property (retain, nonatomic) id<ACCStickerLogger> logger;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (retain, nonatomic) id<ACCEditStickerProtocol> editSticker;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) unsigned long long editMode;
@property (retain, nonatomic) id<ACCStickerPlayerApplying> player;
@property (copy, nonatomic) id /* block */ gestureCanStartCallback;
@property (copy, nonatomic) id /* block */ gestureCanEndCallback;
@property (copy, nonatomic) id /* block */ willDeleteCallback;
@property (copy, nonatomic) id /* block */ didDeleteCallback;
@property (copy, nonatomic) id /* block */ didSelectCallback;

+ (double)extraScaleForStickerContainer:(id)a0;
+ (id)locationModelFromInteractionInfo:(id)a0;
+ (id)adaptedLocationWithInteractionInfo:(id)a0 player:(id)a1;
+ (id)adaptedLocationWithInteractionInfo:(id)a0 mediaInfo:(id)a1;
+ (id)adaptedLocationWithInteractionInfo:(id)a0 inContainerView:(id)a1;

- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (void)updateStickerViewSizeIfNeeded;
- (void)doRender;
- (BOOL)canHandleSticker:(id)a0;
- (void)apply:(id)a0 index:(unsigned long long)a1 doRender:(BOOL)a2;
- (void)applyAsNleVirtualSticker:(id)a0 index:(unsigned long long)a1;
- (BOOL)canRecoverSticker:(id)a0;
- (void)recoverSticker:(id)a0;
- (BOOL)canExpressSticker:(id)a0;
- (void)expressSticker:(id)a0 onCompletion:(id /* block */)a1;
- (void)expressSticker:(id)a0;
- (void)updateSticker:(long long)a0 withNewId:(long long)a1;
- (void)fixScaleForBigStickerWithSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 stickerContentWrapper:(id)a1 responsibleStickerView:(id)a2;
- (void)fixPositionForOutStickerWithSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 stickerContentWrapper:(id)a1 responsibleStickerView:(id)a2;
- (void)addInteractionStickerInfoToArray:(id)a0 idx:(long long)a1 inContainerView:(id)a2;
- (BOOL)canRecoverStickerStorageModel:(id)a0;
- (void)recoverStickerForContainer:(id)a0 storageModel:(id)a1;
- (BOOL)canRecoverImageAlbumStickerModel:(id)a0;
- (void)recoverStickerForContainer:(id)a0 imageAlbumStickerModel:(id)a1;
- (void)applyStickerStorageModel:(id)a0 forContainer:(id)a1 stickerIndex:(unsigned long long)a2 imageAlbumIndex:(unsigned long long)a3;
- (void)fixPositionForChangedStickerWithSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 stickerContentWrapper:(id)a1 leftTopBeforeTap:(struct CGPoint { double x0; double x1; })a2 stickerHierarchyID:(long long)a3;
- (void)fixPositionWithSafeAreaInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0 typeId:(id)a1;
- (double)containerViewScale;
- (void).cxx_destruct;
- (void)finish;
- (void)reset;

@end
