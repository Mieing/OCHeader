@class NSString, NSDictionary;

@interface AWEECommerceSwiftImpl.AWEECMarkAnchorContextParamsModel : MTLModel <MTLJSONSerializing> {
    void /* function */ EVENT_ORIGIN_FEATURE;
    void /* function */ spuId;
    void /* function */ anchorType;
    void /* function */ authorID;
    void /* function */ groupID;
    void /* function */ followStatus;
    void /* function */ ecomEntranceForm;
    void /* function */ enterFrom;
    void /* function */ entranceInfo;
    void /* function */ isAd;
    void /* function */ cid;
}

@property (nonatomic, copy) NSString *EVENT_ORIGIN_FEATURE;
@property (nonatomic, copy) NSString *spuId;
@property (nonatomic, copy) NSString *anchorType;
@property (nonatomic, copy) NSString *authorID;
@property (nonatomic, copy) NSString *groupID;
@property (nonatomic, copy) NSString *followStatus;
@property (nonatomic, copy) NSString *ecomEntranceForm;
@property (nonatomic, copy) NSString *enterFrom;
@property (nonatomic, copy) NSString *entranceInfo;
@property (nonatomic, copy) NSString *isAd;
@property (nonatomic, retain) NSDictionary *searchParams;
@property (nonatomic, copy) NSString *cid;

+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
