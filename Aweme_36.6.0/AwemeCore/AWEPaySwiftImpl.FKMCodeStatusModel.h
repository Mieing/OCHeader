@class NSString;

@interface AWEPaySwiftImpl.FKMCodeStatusModel : MTLModel <MTLJSONSerializing> {
    void /* function */ validStatusRaw;
    void /* function */ codeValue;
    void /* function */ industryCode;
    void /* function */ statusRaw;
    void /* function */ prePayInfo;
    void /* function */ resultPage;
    void /* function */ eventTypeRaw;
    void /* unknown type, empty encoding */ initTimeInterval;
    void /* unknown type, empty encoding */ isAccountBlock;
    void /* unknown type, empty encoding */ statusUpateSource;
}

@property (nonatomic, copy) NSString *validStatusRaw;
@property (nonatomic, copy) NSString *codeValue;
@property (nonatomic, copy) NSString *industryCode;
@property (nonatomic, copy) NSString *statusRaw;
@property (nonatomic, copy) NSString *prePayInfo;
@property (nonatomic, copy) NSString *resultPage;
@property (nonatomic, copy) NSString *eventTypeRaw;
@property (nonatomic) long long serverPushTime;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
