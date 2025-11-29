@class NSString;

@interface AWEPaySwiftImpl.CCMSetPwdInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ addPwdURL;
    void /* function */ specifyText;
}

@property (nonatomic, copy) NSString *addPwdURL;
@property (nonatomic, copy) NSString *specifyText;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
