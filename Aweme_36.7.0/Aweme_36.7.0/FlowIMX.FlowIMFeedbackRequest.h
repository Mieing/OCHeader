@class NSString;

@interface FlowIMX.FlowIMFeedbackRequest : NSObject <NSObject> {
    void /* function */ conversationId;
    void /* function */ messageId;
    void /* function */ feedbackDetailContent;
    void /* unknown type, empty encoding */ selectedGroupIndex;
    void /* function */ entityId;
    void /* function */ scene;
    void /* function */ entityType;
    void /* function */ extra;
}

@property (nonatomic, copy) NSString *conversationId;
@property (nonatomic, copy) NSString *messageId;
@property (nonatomic) long long feedbackType;
@property (nonatomic) int feedbackDetailType;
@property (nonatomic, copy) NSString *feedbackDetailContent;
@property (nonatomic) BOOL isAutoFeedback;
@property (nonatomic, copy) NSString *entityId;
@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSString *entityType;
@property (nonatomic, copy) NSString *extra;

- (void).cxx_destruct;
- (id)init;

@end
