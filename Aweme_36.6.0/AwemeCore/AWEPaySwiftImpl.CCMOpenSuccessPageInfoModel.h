@class NSString, _TtC15AWEPaySwiftImpl34CCMOpenSuccessPagePayTypeInfoModel, _TtC15AWEPaySwiftImpl34CCMOpenSuccessPageServiceInfoModel;

@interface AWEPaySwiftImpl.CCMOpenSuccessPageInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ type;
    void /* function */ title;
    void /* function */ desc;
}

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *desc;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl34CCMOpenSuccessPageServiceInfoModel *serviceDesc;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl34CCMOpenSuccessPagePayTypeInfoModel *payTypeDesc;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
