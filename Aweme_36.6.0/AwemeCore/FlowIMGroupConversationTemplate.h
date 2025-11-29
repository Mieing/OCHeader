@class NSString;

@interface FlowIMGroupConversationTemplate : NSObject {
    void /* function */ name;
    void /* function */ setupDesc;
    void /* unknown type, empty encoding */ recEnable;
    void /* function */ templateId;
    void /* function */ onboardingContent;
    void /* unknown type, empty encoding */ isModelGenName;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *setupDesc;
@property (nonatomic, copy) NSString *templateId;
@property (nonatomic, copy) NSString *onboardingContent;

- (void).cxx_destruct;
- (id)init;

@end
