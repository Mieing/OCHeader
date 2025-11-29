@class NSString;

@interface AWEPaySwiftImpl.TransportCityModel : MTLModel <MTLJSONSerializing> {
    void /* function */ cityCode;
    void /* function */ cityName;
    void /* function */ cityPinyin;
    void /* function */ businessDesc;
}

@property (nonatomic, copy) NSString *cityCode;
@property (nonatomic, copy) NSString *cityName;
@property (nonatomic, copy) NSString *cityPinyin;
@property (nonatomic, copy) NSString *businessDesc;
@property (nonatomic) BOOL sceneShowTabFlag;
@property (nonatomic) BOOL sceneShowIconFlag;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
