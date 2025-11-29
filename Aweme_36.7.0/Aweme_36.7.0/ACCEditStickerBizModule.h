@class NSObject, NSString, AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol, ACCBusinessInputData, ACCStickerServiceProtocol, ACCEditStickerServiceImplProtocol, ACCGlobalStickerServiceProtocol, ACCEditViewContainer, OS_dispatch_queue, IESServiceProvider;

@interface ACCEditStickerBizModule : NSObject <ACCPublishServiceMessage>

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCGlobalStickerServiceProtocol> globalStickerService;
@property (weak, nonatomic) id<ACCEditStickerServiceImplProtocol> stickerImplService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCBusinessInputData> inputData;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (copy, nonatomic) id /* block */ bactchUpdatesBlock;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)makeStickersReadyForApplyWithRepository:(id)a0 globalStickerService:(id)a1 stickerService:(id)a2 stickerImplService:(id)a3 editService:(id)a4 enterPublish:(BOOL)a5;
+ (void)composeSpecialStickerImageWithRepository:(id)a0 stickerService:(id)a1 editService:(id)a2;
+ (void)setInteractionStickersForReadyWithRepository:(id)a0 stickerService:(id)a1 globalStickerService:(id)a2 stickerImplService:(id)a3 enterPublish:(BOOL)a4;
+ (void)dismissPreviewEdgeWithRepository:(id)a0 stickerService:(id)a1 stickerImpleService:(id)a2 editService:(id)a3;

- (void)publishServiceWillStart;
- (void)publishServiceWillSaveDraft;
- (void)readyForApply:(BOOL)a0;
- (void)readyForPublish;
- (void)recordRepoStickerInstance;
- (void)recoverStickers;
- (void).cxx_destruct;
- (id)initWithServiceProvider:(id)a0;
- (void)dealloc;

@end
