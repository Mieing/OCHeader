@class NSString, NSArray;

@interface FlowIMRecommendBotOnboarding : NSObject {
    void /* function */ prologue;
    void /* function */ suggests;
    void /* function */ content;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ content_source;
    void /* unknown type, empty encoding */ call_mode;
    void /* unknown type, empty encoding */ message_list;
}

@property (nonatomic, copy) NSString *prologue;
@property (nonatomic, copy) NSArray *suggests;
@property (nonatomic, copy) NSString *content;

- (void).cxx_destruct;
- (id)init;

@end
