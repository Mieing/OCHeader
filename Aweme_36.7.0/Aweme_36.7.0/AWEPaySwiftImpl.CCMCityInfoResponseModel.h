@class NSString, _TtC15AWEPaySwiftImpl15CCMGatewayExtra, NSArray;

@interface AWEPaySwiftImpl.CCMCityInfoResponseModel : MTLModel <MTLJSONSerializing> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ retStatus;
    void /* function */ localCityCode;
    void /* function */ recommendCityCodes;
    void /* function */ cityList;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl15CCMGatewayExtra *gatewayExtra;
@property (nonatomic, copy) NSString *retStatus;
@property (nonatomic, copy) NSString *localCityCode;
@property (nonatomic, copy) NSArray *recommendCityCodes;
@property (nonatomic, copy) NSArray *cityList;

+ (id)cityListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
