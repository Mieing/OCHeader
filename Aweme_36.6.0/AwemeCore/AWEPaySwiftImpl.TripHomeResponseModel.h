@class NSString, NSArray, _TtC15AWEPaySwiftImpl17TripOpenAuthModel;

@interface AWEPaySwiftImpl.TripHomeResponseModel : MTLModel <MTLJSONSerializing, AWEPaySwiftImpl.TripNetworkResponse> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ retStatus;
    void /* function */ title;
    void /* function */ bottomTabs;
    void /* function */ secServiceList;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, copy) NSString *retStatus;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSArray *bottomTabs;
@property (nonatomic, copy) NSArray *secServiceList;
@property (nonatomic, retain) _TtC15AWEPaySwiftImpl17TripOpenAuthModel *authParams;

+ (id)bottomTabsJSONTransformer;
+ (id)secServiceListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
