@class NSString, _TtC15AWEPaySwiftImpl16CCMCardCertModel;

@interface AWEPaySwiftImpl.CCMCardCertPushModel : MTLModel <MTLJSONSerializing> {
    void /* function */ deviceCertCn;
}

@property (nonatomic, copy) NSString *deviceCertCn;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl16CCMCardCertModel *cardCertData;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
