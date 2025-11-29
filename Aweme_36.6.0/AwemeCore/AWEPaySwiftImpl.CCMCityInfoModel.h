@class NSString, NSArray;

@interface AWEPaySwiftImpl.CCMCityInfoModel : MTLModel <MTLJSONSerializing> {
    void /* function */ cityCode;
    void /* function */ cityName;
    void /* function */ cityPinyin;
    void /* function */ trafficList;
}

@property (nonatomic, copy) NSString *cityCode;
@property (nonatomic, copy) NSString *cityName;
@property (nonatomic, copy) NSString *cityPinyin;
@property (nonatomic, copy) NSArray *trafficList;

+ (id)trafficListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
