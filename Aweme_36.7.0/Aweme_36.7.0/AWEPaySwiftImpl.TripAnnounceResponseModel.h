@class NSString, NSDictionary;

@interface AWEPaySwiftImpl.TripAnnounceResponseModel : MTLModel <MTLJSONSerializing, AWEPaySwiftImpl.TripNetworkResponse> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ retStatus;
    void /* function */ taskResultMap;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic) long long statusCode;
@property (nonatomic, copy) NSString *retStatus;
@property (nonatomic, copy) NSDictionary *taskResultMap;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
