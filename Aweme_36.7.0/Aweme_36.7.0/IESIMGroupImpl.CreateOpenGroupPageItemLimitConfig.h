@class NSString;

@interface IESIMGroupImpl.CreateOpenGroupPageItemLimitConfig : MTLModel <MTLJSONSerializing> {
    void /* function */ toast;
}

@property (nonatomic) long long maxLength;
@property (nonatomic, copy) NSString *toast;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
