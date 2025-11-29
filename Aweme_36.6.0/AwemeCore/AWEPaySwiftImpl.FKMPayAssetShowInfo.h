@class NSString;

@interface AWEPaySwiftImpl.FKMPayAssetShowInfo : MTLModel <MTLJSONSerializing> {
    void /* function */ title;
    void /* function */ iconUrl;
}

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *iconUrl;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
