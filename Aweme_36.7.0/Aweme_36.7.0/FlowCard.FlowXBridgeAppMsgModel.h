@class NSString, NSDictionary;

@interface FlowCard.FlowXBridgeAppMsgModel : BDXBridgeModel {
    void /* function */ scene;
    void /* function */ commonProps;
    void /* function */ msg;
    void /* function */ ext;
}

@property (nonatomic, copy) NSString *scene;
@property (nonatomic, copy) NSDictionary *commonProps;
@property (nonatomic, copy) NSString *msg;
@property (nonatomic, copy) NSDictionary *ext;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
