@class AWEIMEditSendButtonViewHolder, NSMapTable, AWEIMEditFinishButtonViewHolder, NSString, AWEVideoPublishViewModel, UIView, ACCEditBottomToolBarViewHolder;
@protocol ACCSequenceEditServiceProtocol, ACCStickerServiceProtocol, ACCEditViewContainer, IESServiceProvider, ACCComponentManager;

@interface AWEIMEditPageSettingStyleLayoutManager : NSObject <ACCStickerServiceSubscriber, ACCEditUILayoutManagerProtocol>

@property (retain, nonatomic) NSMapTable *componentMap;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceService;
@property (weak, nonatomic) id<ACCComponentManager> componentManager;
@property (retain, nonatomic) ACCEditBottomToolBarViewHolder *toolBarViewHolder;
@property (retain, nonatomic) AWEIMEditSendButtonViewHolder *sendButtonViewHolder;
@property (retain, nonatomic) AWEIMEditFinishButtonViewHolder *finishButtonViewHolder;
@property (retain, nonatomic) UIView *backgroundView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRepository:(id)a0 serviceProvider:(id)a1;
- (void)addBackgroundView;
- (void)stickerServiceConfigOtherViewAlpha:(double)a0;
- (void)layoutViews;
- (void).cxx_destruct;

@end
