@class NSString, _TtC14IESIMGroupImpl34CreateOpenGroupPageItemLimitConfig;

@interface IESIMGroupImpl.CreateOpenGroupPageItemConfig : MTLModel <MTLJSONSerializing> {
    void /* function */ title;
    void /* function */ subtitle;
    void /* function */ placeholder;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic) BOOL required;
@property (nonatomic) long long lineNum;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, retain) _TtC14IESIMGroupImpl34CreateOpenGroupPageItemLimitConfig *limit;
@property (nonatomic) BOOL defaultValue;
@property (nonatomic) BOOL bottomTipAreaForceShow;

+ (id)limitJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
