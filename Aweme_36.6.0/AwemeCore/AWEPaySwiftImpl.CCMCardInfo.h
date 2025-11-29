@class NSString;

@interface AWEPaySwiftImpl.CCMCardInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ cardID;
    void /* function */ cardType;
    void /* function */ cardStatus;
    void /* function */ cityCode;
    void /* function */ cityName;
    void /* function */ signNo;
    void /* function */ trafficID;
    void /* function */ trafficName;
    void /* function */ trafficMerchantID;
    void /* function */ trafficCardID;
}

@property (nonatomic, copy) NSString *cardID;
@property (nonatomic, copy) NSString *cardType;
@property (nonatomic, copy) NSString *cardStatus;
@property (nonatomic, copy) NSString *cityCode;
@property (nonatomic, copy) NSString *cityName;
@property (nonatomic, copy) NSString *signNo;
@property (nonatomic, copy) NSString *trafficID;
@property (nonatomic, copy) NSString *trafficName;
@property (nonatomic, copy) NSString *trafficMerchantID;
@property (nonatomic, copy) NSString *trafficCardID;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
