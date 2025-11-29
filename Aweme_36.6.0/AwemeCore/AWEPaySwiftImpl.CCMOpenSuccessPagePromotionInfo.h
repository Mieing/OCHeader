@class NSString, _TtC15AWEPaySwiftImpl17CCMDisplayVoucher;

@interface AWEPaySwiftImpl.CCMOpenSuccessPagePromotionInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ lynxSchema;
    void /* function */ voucher;
}

@property (nonatomic, copy) NSString *lynxSchema;
@property (nonatomic, copy) NSString *voucher;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl17CCMDisplayVoucher *voucherInfo;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)voucherInfoJSONTransformer;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
