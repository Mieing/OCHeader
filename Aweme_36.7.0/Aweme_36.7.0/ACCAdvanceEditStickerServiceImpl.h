@class ACCCameraSubscription, NSSet, ACCAEDataRepositoryInputData, NSString, ACCStickerContainerView, ACCStickerCompoundHandler;
@protocol AEKMegaEditor;

@interface ACCAdvanceEditStickerServiceImpl : NSObject <ACCAdvanceEditStickerServiceProtocol>

@property (weak, nonatomic) ACCStickerContainerView *stickerContainer;
@property (retain, nonatomic) ACCStickerCompoundHandler *compoundHandler;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) NSSet *embeddedIDs;
@property (copy, nonatomic) id /* block */ stickerContainerLoader;
@property (retain, nonatomic) ACCAEDataRepositoryInputData *inputData;
@property (nonatomic) long long maxAddInfoStickerCount;
@property (nonatomic) long long maxAddTextStickerCount;
@property (weak, nonatomic) id<AEKMegaEditor> megaEditor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)infoStickerCount;
- (void)registStickerHandler:(id)a0;
- (void)unRegistStickerHandler:(id)a0;
- (void)resetStickerInPlayer;
- (void)removeAllEmbedStickerViews;
- (void)removeAllStickerViewsExclude:(id)a0;
- (long long)textStickerCount;
- (void)recoverInfoSticker;
- (BOOL)reachedMaxInfoStickerCount;
- (BOOL)reachedMaxTextStickerCount;
- (BOOL)hasStickerForTypeIds:(id)a0;
- (BOOL)isValidAddTime;
- (void)notifyStickerContainerAlreadyUpdate;
- (void)reloadStickerContainer;
- (void)updateEditMode:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;
- (void)removeSubscriber:(id)a0;

@end
