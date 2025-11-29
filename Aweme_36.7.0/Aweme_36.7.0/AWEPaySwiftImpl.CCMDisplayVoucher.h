@class NSString;

@interface AWEPaySwiftImpl.CCMDisplayVoucher : MTLModel <MTLJSONSerializing> {
    void /* function */ voucherType;
    void /* function */ voucherName;
    void /* function */ voucherNo;
    void /* function */ assetType;
}

@property (nonatomic, copy) NSString *voucherType;
@property (nonatomic, copy) NSString *voucherName;
@property (nonatomic) long long amount;
@property (nonatomic, copy) NSString *voucherNo;
@property (nonatomic, copy) NSString *assetType;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
