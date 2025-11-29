@class NSString;

@interface AWEPaySwiftImpl.CCMServiceSubTitle : MTLModel <MTLJSONSerializing> {
    void /* function */ subTitleText;
    void /* function */ subTitleTextColor;
}

@property (nonatomic, copy) NSString *subTitleText;
@property (nonatomic, copy) NSString *subTitleTextColor;
@property (nonatomic) long long subTitleTextColorAlpha;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
