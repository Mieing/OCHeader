@class NSString, IESLivePSComponentConfigModel, HTSEventContext, UIView, IESLivePublicScreenView;
@protocol IESLiveMessageFeaturedAreaViewDelegate;

@interface IESLiveMessageFeaturedAreaView : UIView <IESLivePublicScreenSettingChangedAction, IESLivePublicScreenLayoutSubscriber, IESLiveMessageInteractionModuleMessageListAction, IESLiveMessageFeaturedPublicScreenReaction, IESLivePSComponentViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLivePublicScreenView *publicScreen;
@property (nonatomic) unsigned long long curFontSizeType;
@property (weak, nonatomic) id<IESLiveMessageFeaturedAreaViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ allAnimationFinished;
@property (retain, nonatomic) IESLivePSComponentConfigModel *configModel;
@property (retain, nonatomic) HTSEventContext *trackContext;

- (void)didSetAttachingDIContext;
- (void)publicScreenLayoutChanged:(id)a0 forType:(unsigned long long)a1;
- (void)refreshView;
- (void)messageListRefreshConfigChanged:(id)a0;
- (void)appear:(id /* block */)a0;
- (void)disappear:(id /* block */)a0;
- (void)fontSizeTypeChanged:(unsigned long long)a0;
- (void)heightTypeChanged:(unsigned long long)a0;
- (void)setupPublicScreenView;
- (void)switchToMessageListView;
- (void)addPublicScreenToContainer;
- (void)messageFeaturedPublicScreenRefresh;
- (void)didClickMessageListContainer;
- (void)updateMessageListHeightWithFontSizeType:(unsigned long long)a0;
- (void)showMessageFeaturedActionSheet;
- (void)messageFeaturedPublicScreenFirstRefresh;
- (void)updateConfigWithMode:(long long)a0 role:(long long)a1;
- (long long)currentRole;
- (void)updateBufferWithMaxCount:(long long)a0;
- (void)displayNodesImmdiately:(id)a0;
- (id)currentShowingNodes;
- (void)cleanBuffers;
- (void).cxx_destruct;
- (long long)currentMode;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setupViews;
- (void)handleMessages:(id)a0;

@end
