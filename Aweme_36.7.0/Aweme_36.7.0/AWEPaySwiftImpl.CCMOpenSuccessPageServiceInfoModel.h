@class NSString;

@interface AWEPaySwiftImpl.CCMOpenSuccessPageServiceInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ serviceDesc;
    void /* function */ creditServiceName;
    void /* function */ creditServiceURL;
}

@property (nonatomic, copy) NSString *serviceDesc;
@property (nonatomic, copy) NSString *creditServiceName;
@property (nonatomic, copy) NSString *creditServiceURL;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
