@class NSString;

@interface IESIMGroupImpl.CreateOpenGroupPageAgreementConfig : MTLModel <MTLJSONSerializing> {
    void /* function */ text;
    void /* function */ linkText;
    void /* function */ link;
}

@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSString *linkText;
@property (nonatomic, copy) NSString *link;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
