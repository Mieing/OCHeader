@class NSString, ACCStickerContainerView, AWEVideoPublishViewModel;
@protocol ACCEditTransitionServiceProtocol, ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, ACCStickerPlayerApplying, ACCEditServiceProtocol;

@interface ACCEditStickerSelectTimeManager : NSObject <ACCStickerSelectTimeVCDelegate>

@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) ACCStickerContainerView *stickerContainer;
@property (retain, nonatomic) id<ACCStickerPlayerApplying> player;
@property (retain, nonatomic) id<ACCEditTransitionServiceProtocol> transitionService;
@property (nonatomic) struct CGSize { double width; double height; } extraScaleRatio;
@property (weak, nonatomic) ACCStickerContainerView *stickerContainerInSelectTimeVC;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (readonly, nonatomic) BOOL isSelectTimeVCShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithEditService:(id)a0 repository:(id)a1 player:(id)a2 stickerContainer:(id)a3 transitionService:(id)a4;
- (void)modernEditStickerDuration:(id)a0;
- (void)recoveryInfoStickerChanges:(id)a0;
- (void)updatePlayerViewIfNeeded;
- (void)modernEditStickerDuration:(id)a0 playerBgView:(id)a1;
- (void)imageGenerator:(id)a0 requestImages:(unsigned long long)a1 step:(double)a2 size:(struct CGSize { double x0; double x1; })a3 array:(id)a4 completion:(id /* block */)a5;
- (void)didUpdateStickerContainer:(id)a0;
- (void)selectTimeVCWillAppearWithExtraScaleRatio:(struct CGSize { double x0; double x1; })a0;
- (void)willExitSelectTime:(id)a0;
- (void)selectTimeVCDidDisappear;
- (void)didCancelStickerContainer:(id)a0;
- (struct CGSize { double x0; double x1; })scaleBetweenMediaViewAndStickerContainer;
- (void).cxx_destruct;

@end
