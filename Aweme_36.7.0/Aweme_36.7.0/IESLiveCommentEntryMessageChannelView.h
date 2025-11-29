@class NSString, IESLiveChatChannelGreetView;

@interface IESLiveCommentEntryMessageChannelView : IESLiveCommentEntryBaseView <IESLiveChatChannelAction>

@property (retain, nonatomic) IESLiveChatChannelGreetView *greetView;
@property (nonatomic) long long currentStatus;
@property (nonatomic) BOOL didMount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)chatChannelGreetStatusDidChanged:(BOOL)a0;
- (void)chatChannelGreetDidSendComplete;
- (void)clickCommentEntry;
- (void)clickExpandEntry;
- (id)commentEntryTheme;
- (id)entryViewType;
- (void)commentEntryUpdate;
- (void)commentEntryDidUnMount;
- (void)commentEntryDidMount;
- (void)setupGreetView;
- (void)switchChatChannelViewStatus:(long long)a0;
- (id)createStructureConfig;
- (void).cxx_destruct;
- (id)initWithStore:(id)a0;
- (void)layoutSubviews;

@end
