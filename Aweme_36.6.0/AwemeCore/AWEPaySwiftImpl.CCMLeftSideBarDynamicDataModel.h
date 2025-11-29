@class NSString, NSDictionary;

@interface AWEPaySwiftImpl.CCMLeftSideBarDynamicDataModel : MTLModel <MTLJSONSerializing> {
    void /* function */ reddotLabelText;
    void /* function */ reddotBuriedParams;
}

@property (nonatomic, copy) NSString *reddotLabelText;
@property (nonatomic, copy) NSDictionary *reddotBuriedParams;

+ (id)reddotBuriedParamsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
