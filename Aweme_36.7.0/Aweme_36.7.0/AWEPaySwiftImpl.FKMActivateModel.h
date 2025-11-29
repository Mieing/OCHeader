@class _TtC15AWEPaySwiftImpl14FKMServerExtra, NSString, _TtC15AWEPaySwiftImpl23FKMDefaultPayAssetModel, _TtC15AWEPaySwiftImpl21FKMPromotionInfoModel, NSDictionary;

@interface AWEPaySwiftImpl.FKMActivateModel : MTLModel <MTLJSONSerializing, AWEPaySwiftImpl.FKMNetworkResponse> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ msgHint;
    void /* function */ onlineCodeValueRaw;
    void /* function */ verifyId;
    void /* function */ verifyToken;
    void /* function */ decisionId;
    void /* function */ permissionGuideUrl;
    void /* function */ voucherSchema;
    void /* function */ voucherInfoDict;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, copy) NSString *msgHint;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl14FKMServerExtra *serverExtra;
@property (nonatomic, copy) NSString *onlineCodeValueRaw;
@property (nonatomic, copy) NSString *verifyId;
@property (nonatomic, copy) NSString *verifyToken;
@property (nonatomic, copy) NSString *decisionId;
@property (nonatomic, copy) NSString *permissionGuideUrl;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl23FKMDefaultPayAssetModel *defaultAssetInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl21FKMPromotionInfoModel *promotionInfo;
@property (nonatomic, copy) NSString *voucherSchema;
@property (nonatomic, copy) NSDictionary *voucherInfoDict;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
