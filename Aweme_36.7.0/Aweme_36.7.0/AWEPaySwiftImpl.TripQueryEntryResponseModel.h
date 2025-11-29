@class NSString, NSDictionary;

@interface AWEPaySwiftImpl.TripQueryEntryResponseModel : MTLModel <MTLJSONSerializing, AWEPaySwiftImpl.TripNetworkResponse> {
    void /* function */ retCode;
    void /* function */ retMsg;
    void /* function */ retStatus;
    void /* function */ subTitle;
    void /* function */ rsTag;
}

@property (nonatomic, copy) NSString *retCode;
@property (nonatomic, copy) NSString *retMsg;
@property (nonatomic, copy) NSString *retStatus;
@property (nonatomic) BOOL canShow;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic) long long subTitlePriority;
@property (nonatomic, copy) NSDictionary *rsTag;

+ (id)rsTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
