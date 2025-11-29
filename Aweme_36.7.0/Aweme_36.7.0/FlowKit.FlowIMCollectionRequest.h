@class NSString;

@interface FlowKit.FlowIMCollectionRequest : NSObject {
    void /* function */ localMessageId;
    void /* function */ messageId;
}

@property (nonatomic, copy) NSString *localMessageId;
@property (nonatomic, copy) NSString *messageId;

- (void).cxx_destruct;
- (id)init;

@end
