@class NSString, NSArray, NSDictionary;

@interface FlowIMX.FlowIMSubConversationRequest : NSObject <NSObject> {
    void /* function */ onboardingContent;
    void /* function */ messageIds;
    void /* function */ ext;
}

@property (nonatomic, copy) NSString *onboardingContent;
@property (nonatomic, copy) NSArray *messageIds;
@property (nonatomic, copy) NSDictionary *ext;

- (id)initWithOnboardingContent:(id)a0 messageIds:(id)a1 ext:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
