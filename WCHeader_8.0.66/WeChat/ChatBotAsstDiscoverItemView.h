@class ChatBotRoomHeadComponentView, NSString, ChatBotVoIPRoomInfo, ChatBotBubbleView;
@protocol ChatBotAsstDiscoverItemDelegate;

@interface ChatBotAsstDiscoverItemView : UIView <ChatBotRoomHeadComponentViewDelegate>

@property (weak, nonatomic) id<ChatBotAsstDiscoverItemDelegate> delegate;
@property (retain, nonatomic) ChatBotVoIPRoomInfo *roomInfo;
@property (retain, nonatomic) ChatBotRoomHeadComponentView *headComponentView;
@property (retain, nonatomic) ChatBotBubbleView *tipsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 RoomInfo:(id)a1;
- (void)layoutContentViews;
- (void)layoutSubviews;
- (void)layoutHeadComponentView;
- (void)layoutTipsView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)onHeadComponentViewClick:(id)a0;
- (void).cxx_destruct;

@end
