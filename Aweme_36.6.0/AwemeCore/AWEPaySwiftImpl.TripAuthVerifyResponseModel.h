@class NSString;

@interface AWEPaySwiftImpl.TripAuthVerifyResponseModel : MTLModel <MTLJSONSerializing, AWEPaySwiftImpl.TripNetworkResponse> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ retStatus;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, copy) NSString *retStatus;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
