@class AWEIMSmartAssistantManipulateAssistantMsgRequest, AWEIMSmartAssistantQuickReplyRecommendGetRequest;

@interface AWEIMSmartAssistantSendPushMsgRequest : GPBMessage

@property (nonatomic) int cmd;
@property (nonatomic) BOOL hasCmd;
@property (retain, nonatomic) AWEIMSmartAssistantManipulateAssistantMsgRequest *manipulateAssistantMsgRequest;
@property (nonatomic) BOOL hasManipulateAssistantMsgRequest;
@property (retain, nonatomic) AWEIMSmartAssistantQuickReplyRecommendGetRequest *quickReplyRecommendGetRequest;
@property (nonatomic) BOOL hasQuickReplyRecommendGetRequest;

+ (id)descriptor;

@end
