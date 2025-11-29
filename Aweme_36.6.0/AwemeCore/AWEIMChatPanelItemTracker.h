@class NSDictionary, AWEIMMessageConversation, NSString;
@protocol AWEIMChatPanelItemTrackerDelegate;

@interface AWEIMChatPanelItemTracker : NSObject

@property (copy, nonatomic) NSDictionary *commonParams;
@property (weak, nonatomic) id<AWEIMChatPanelItemTrackerDelegate> delegate;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (retain, nonatomic) NSString *convID;
@property (retain, nonatomic) NSString *toUserID;
@property (nonatomic) BOOL isSingleChat;
@property (copy, nonatomic) NSString *formatOwnerID;
@property (nonatomic) BOOL isFormat;

- (id)p_chatType;
- (void)trackPanelSlide;
- (id)p_commonParams;
- (id)p_buttonNames;
- (void)trackPanelOpen;
- (void)trackItemClick:(id)a0;
- (void).cxx_destruct;

@end
