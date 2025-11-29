@class NSString;

@interface AWEPaySwiftImpl.CCMOpenSuccessPagePayTypeInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ firstPayTypeDesc;
    void /* function */ payTypesURL;
}

@property (nonatomic, copy) NSString *firstPayTypeDesc;
@property (nonatomic, copy) NSString *payTypesURL;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
