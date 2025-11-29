@class NSMapTable, NSString, AWEVideoPublishViewModel, UIView, ACCEditBottomToolBarViewHolder;
@protocol IESServiceProvider, ACCEditViewContainer, ACCComponentManager, ACCStickerServiceProtocol;

@interface ACCComposerEditToolBarLayoutManager : NSObject <ACCStickerServiceSubscriber, ACCEditUILayoutManagerProtocol>

@property (retain, nonatomic) NSMapTable *componentMap;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCComponentManager> componentManager;
@property (weak, nonatomic) id<ACCStickerServiceProtocol> stickerService;
@property (retain, nonatomic) ACCEditBottomToolBarViewHolder *toolBarViewHolder;
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
