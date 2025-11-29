@class NSString;

@interface AWEPaySwiftImpl.CCMBindCardInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ bindURL;
    void /* function */ bindOrderNo;
}

@property (nonatomic, copy) NSString *bindURL;
@property (nonatomic, copy) NSString *bindOrderNo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
