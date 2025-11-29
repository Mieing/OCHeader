@class _TtC15AWEPaySwiftImpl15CCMGatewayExtra, NSString, _TtC15AWEPaySwiftImpl30CCMOpenNewCardSuccessPageModel, _TtC15AWEPaySwiftImpl18CCMOpeningPageInfo, NSDictionary, _TtC15AWEPaySwiftImpl11CCMCardInfo, _TtC15AWEPaySwiftImpl23CCMMemberGuideInfoModel, _TtC15AWEPaySwiftImpl18CCMPayChannelModel;

@interface AWEPaySwiftImpl.CCMOpenNewCardResponse : MTLModel <MTLJSONSerializing> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ retStatus;
    void /* function */ openResultInner;
    void /* function */ originBlockNumber;
    void /* function */ openStageLinks;
    void /* function */ successPageData;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl15CCMGatewayExtra *gatewayExtra;
@property (nonatomic, copy) NSString *retStatus;
@property (nonatomic, copy) NSString *openResultInner;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl11CCMCardInfo *cardInfo;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl18CCMPayChannelModel *payChannel;
@property (nonatomic, copy) NSString *originBlockNumber;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl23CCMMemberGuideInfoModel *memberGuideInfo;
@property (nonatomic, copy) NSString *openStageLinks;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl30CCMOpenNewCardSuccessPageModel *successPage;
@property (nonatomic, copy) NSDictionary *successPageData;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl18CCMOpeningPageInfo *openingPageInfo;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
