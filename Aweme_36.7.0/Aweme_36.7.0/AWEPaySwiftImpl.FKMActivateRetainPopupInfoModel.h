@class NSString;

@interface AWEPaySwiftImpl.FKMActivateRetainPopupInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ retainInfo;
    void /* function */ schema;
}

@property (nonatomic, copy) NSString *retainInfo;
@property (nonatomic, copy) NSString *schema;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
