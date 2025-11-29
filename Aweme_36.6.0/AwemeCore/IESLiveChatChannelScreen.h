@class NSString, IESLivePSComponentConfigModel;

@interface IESLiveChatChannelScreen : IESLivePublicScreenView <IESLiveMessageInteractionModuleCommentAction>

@property (nonatomic) BOOL hasTrace;
@property (nonatomic) struct CGSize { double width; double height; } lastContentSize;
@property (retain, nonatomic) IESLivePSComponentConfigModel *topUserListConfigModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publicScreenID;
- (void)didAddToContainer;
- (void)tapUnreadTipView;
- (void)addChatChannelTopListView;
- (void)showMentionView:(BOOL)a0;
- (id)chatChannelViewModel;
- (void)tapMentionViewWithNode:(id)a0;
- (void)scrollToCurrentBottom;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)layoutSubviews;

@end
