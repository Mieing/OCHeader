@class NSString, AWEVideoPublishViewModel, ACCStickerContainerView, ACCStickerCompoundHandler;

@interface ACCRecorderStickerServiceImpl : NSObject <ACCRecorderStickerServiceProtocol>

@property (weak, nonatomic) ACCStickerContainerView *stickerContainerView;
@property (retain, nonatomic) ACCStickerCompoundHandler *compoundHandler;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (copy, nonatomic) id /* block */ getStickerContainerViewBlock;
@property (copy, nonatomic) id /* block */ getViewContainerBlock;
@property (copy, nonatomic) id /* block */ forceStoreStickersBlock;
@property (nonatomic) BOOL containerInteracting;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRepository:(id)a0;
- (void)recoverStickers;
- (void)registerStickerHandler:(id)a0;
- (void)addRecorderInteractionStickerInfoToArray:(id)a0 idx:(long long)a1;
- (void)toggleForbitHidingStickerContainerView:(BOOL)a0;
- (void)toggleStickerContainerViewHidden:(BOOL)a0;
- (void)startEditSticker:(long long)a0;
- (void)endEditSticker:(long long)a0;
- (void)updateStickerContainer;
- (void)forceStoreStickers;
- (void).cxx_destruct;

@end
