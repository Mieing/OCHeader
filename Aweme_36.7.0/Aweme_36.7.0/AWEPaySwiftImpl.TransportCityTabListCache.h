@class NSArray, _TtC15AWEPaySwiftImpl18TransportCityModel;

@interface AWEPaySwiftImpl.TransportCityTabListCache : MTLModel <MTLJSONSerializing> {
    void /* function */ citySceneList;
}

@property (nonatomic, retain) _TtC15AWEPaySwiftImpl18TransportCityModel *cityInfo;
@property (nonatomic, copy) NSArray *citySceneList;

+ (id)citySceneListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
