@class AWEIMSmartAssistantQuickReplyRecommendGetResponse, AWEIMSmartAssistantPushMsgResponse, AWEIMSmartAssistantManipulateAssistantMsgResponse;

@interface AWEIMSmartAssistantResponse : GPBMessage

@property (retain, nonatomic) AWEIMSmartAssistantManipulateAssistantMsgResponse *manipulateAssistantMsgResponse;
@property (nonatomic) BOOL hasManipulateAssistantMsgResponse;
@property (retain, nonatomic) AWEIMSmartAssistantQuickReplyRecommendGetResponse *quickReplyRecommendGetResponse;
@property (nonatomic) BOOL hasQuickReplyRecommendGetResponse;
@property (retain, nonatomic) AWEIMSmartAssistantPushMsgResponse *pushAssistantMsgResponse;
@property (nonatomic) BOOL hasPushAssistantMsgResponse;

+ (id)descriptor;

@end
