@class NSString, _TtC15AWEPaySwiftImpl15CCMGatewayExtra, _TtC15AWEPaySwiftImpl16CCMCardCertModel, _TtC15AWEPaySwiftImpl16CCMOperationCard;

@interface AWEPaySwiftImpl.CCMCardCertResponseModel : MTLModel <MTLJSONSerializing> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ srvRetCmd;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl15CCMGatewayExtra *gatewayExtra;
@property (nonatomic) BOOL srvRetFlag;
@property (nonatomic, copy) NSString *srvRetCmd;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl16CCMCardCertModel *cardCertInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl16CCMOperationCard *operationCard;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
