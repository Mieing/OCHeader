@class NSString;

@interface IESIMGroupImpl.GroupManagerOperationTextTemplate : MTLModel <MTLJSONSerializing> {
    void /* function */ text;
    void /* function */ schema;
    void /* function */ formatKey;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *schema;
@property (nonatomic, copy) NSString *formatKey;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
