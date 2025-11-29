@class _TtC15AWEPaySwiftImpl11TripTabInfo, NSArray, _TtC15AWEPaySwiftImpl14TripFetchModel;

@interface AWEPaySwiftImpl.TripSecServiceModel : MTLModel <MTLJSONSerializing> {
    void /* function */ cardInfoList;
}

@property (nonatomic, retain) _TtC15AWEPaySwiftImpl11TripTabInfo *tabInfo;
@property (nonatomic, copy) NSArray *cardInfoList;
@property (nonatomic) BOOL isCardInfoValid;
@property (nonatomic) BOOL needTripOpenAuth;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl14TripFetchModel *fetchModel;

+ (id)cardInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
