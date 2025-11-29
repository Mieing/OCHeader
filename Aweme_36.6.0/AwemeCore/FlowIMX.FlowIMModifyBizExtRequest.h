@class NSString, NSDictionary;

@interface FlowIMX.FlowIMModifyBizExtRequest : NSObject <NSObject> {
    void /* function */ localMessageId;
    void /* function */ messageId;
    void /* function */ bizExt;
}

@property (nonatomic, copy) NSString *localMessageId;
@property (nonatomic, copy) NSString *messageId;
@property (nonatomic, copy) NSDictionary *bizExt;

- (void).cxx_destruct;
- (id)init;

@end
