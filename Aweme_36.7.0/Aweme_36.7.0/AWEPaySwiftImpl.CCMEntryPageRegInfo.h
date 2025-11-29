@class NSString, NSArray;

@interface AWEPaySwiftImpl.CCMEntryPageRegInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ jumpTripUrl;
    void /* function */ regTrafficInfos;
    void /* function */ regGuideText;
}

@property (nonatomic, copy) NSString *jumpTripUrl;
@property (nonatomic) long long num;
@property (nonatomic, copy) NSArray *regTrafficInfos;
@property (nonatomic, copy) NSString *regGuideText;

+ (id)regTrafficInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
