@class NSString;

@interface FlowIMX.FlowIMCmdKeyValue : NSObject {
    void /* function */ key;
    void /* function */ value;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *value;

- (void).cxx_destruct;
- (id)init;
- (id)initWithKey:(id)a0 value:(id)a1;

@end
