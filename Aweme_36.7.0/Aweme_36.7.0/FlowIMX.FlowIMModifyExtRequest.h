@class NSString, NSDictionary;

@interface FlowIMX.FlowIMModifyExtRequest : NSObject <NSObject> {
    void /* function */ messageId;
    void /* function */ ext;
}

@property (nonatomic, copy) NSString *messageId;
@property (nonatomic, copy) NSDictionary *ext;

- (void).cxx_destruct;
- (id)init;

@end
