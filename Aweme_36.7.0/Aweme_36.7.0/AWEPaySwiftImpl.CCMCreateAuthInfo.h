@class NSString;

@interface AWEPaySwiftImpl.CCMCreateAuthInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ authURL;
    void /* function */ authOrderNo;
}

@property (nonatomic, copy) NSString *authURL;
@property (nonatomic, copy) NSString *authOrderNo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
