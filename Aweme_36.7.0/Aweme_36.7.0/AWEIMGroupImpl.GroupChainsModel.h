@class NSString, NSNumber, NSArray;

@interface AWEIMGroupImpl.GroupChainsModel : MTLModel <MTLJSONSerializing> {
    void /* function */ chainsId;
    void /* function */ chainsDescription;
    void /* function */ chainsExample;
    void /* function */ chainsAdditionalInfo;
    void /* function */ chainsEntryList;
    void /* function */ chainsStatusText;
}

@property (nonatomic, copy) NSString *chainsId;
@property (nonatomic, retain) NSNumber *chainsJoinCount;
@property (nonatomic, copy) NSString *chainsDescription;
@property (nonatomic, copy) NSString *chainsExample;
@property (nonatomic, copy) NSString *chainsAdditionalInfo;
@property (nonatomic, retain) NSNumber *chainsLastUpdateVersion;
@property (nonatomic, retain) NSNumber *chainsLastUpdateTime;
@property (nonatomic, copy) NSArray *chainsEntryList;
@property (nonatomic, retain) NSNumber *chainsStatus;
@property (nonatomic, copy) NSString *chainsStatusText;

+ (id)chainsEntryListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
