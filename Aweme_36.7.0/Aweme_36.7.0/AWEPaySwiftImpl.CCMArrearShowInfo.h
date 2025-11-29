@class NSString;

@interface AWEPaySwiftImpl.CCMArrearShowInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ guideText;
    void /* function */ jumpUrl;
}

@property (nonatomic) long long amount;
@property (nonatomic) long long orderNum;
@property (nonatomic, copy) NSString *guideText;
@property (nonatomic, copy) NSString *jumpUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
