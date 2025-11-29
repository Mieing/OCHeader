@class NSDictionary, NSString;

@interface AWEPaySwiftImpl.FeelGoodResponseModel : AWEBaseApiModel {
    void /* function */ putResultMap;
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ retStatus;
    void /* unknown type, empty encoding */ placeNo;
    void /* unknown type, empty encoding */ resourceNo;
}

@property (nonatomic, copy) NSDictionary *putResultMap;
@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, copy) NSString *retStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
