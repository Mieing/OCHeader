@class NSString;

@interface AWEPaySwiftImpl.TripFetchModel : MTLModel <MTLJSONSerializing> {
    void /* function */ fetchParamsString;
}

@property (nonatomic, copy) NSString *fetchParamsString;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
