@class _TtC15AWEPaySwiftImpl17CCMArrearShowInfo, NSString, _TtC15AWEPaySwiftImpl15CCMGatewayExtra, _TtC15AWEPaySwiftImpl20CCMTrafficCardDetail, _TtC15AWEPaySwiftImpl16CCMOperationCard, _TtC15AWEPaySwiftImpl19CCMEntryPageRegInfo, NSDictionary;

@interface AWEPaySwiftImpl.CCMSceneCardDetailResponse : MTLModel <MTLJSONSerializing> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ retStatus;
    void /* function */ extData;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl15CCMGatewayExtra *gatewayExtra;
@property (nonatomic, copy) NSString *retStatus;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl17CCMArrearShowInfo *arrearInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl19CCMEntryPageRegInfo *regInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl20CCMTrafficCardDetail *trafficCardDetail;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl16CCMOperationCard *operationCard;
@property (nonatomic, copy) NSDictionary *extData;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
