@class NSString;

@interface IESIMGroupImpl.CreateOpenGroupMemberModuleItemRule : MTLModel <MTLJSONSerializing> {
    void /* function */ rule;
    void /* function */ limit;
    void /* function */ ruleType;
}

@property (nonatomic, copy) NSString *rule;
@property (nonatomic, copy) NSString *limit;
@property (nonatomic, copy) NSString *ruleType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
