@class NSString, NSArray;

@interface IESIMGroupImpl.CreateOpenGroupMemberCountModuleItemModel : MTLModel <MTLJSONSerializing> {
    void /* function */ groupType;
    void /* function */ title;
    void /* function */ tips;
    void /* function */ rules;
}

@property (nonatomic, copy) NSString *groupType;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) BOOL isDefaultShow;
@property (nonatomic, copy) NSString *tips;
@property (nonatomic) BOOL tipsWarning;
@property (nonatomic) BOOL isEnable;
@property (nonatomic, copy) NSArray *rules;
@property (nonatomic) long long alreadyCreateCount;

+ (id)rulesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
