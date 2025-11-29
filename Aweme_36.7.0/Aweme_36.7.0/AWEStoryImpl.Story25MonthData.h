@class NSArray, NSNumber;

@interface AWEStoryImpl.Story25MonthData : MTLModel <MTLJSONSerializing> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataIdentifier;
    void /* function */ data;
    void /* function */ itemIDs;
    void /* function */ storyGroupV2Items;
}

@property (nonatomic, copy) NSArray *data;
@property (nonatomic, retain) NSNumber *maxCursor;
@property (nonatomic, retain) NSNumber *minCursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic, copy) NSArray *itemIDs;
@property (nonatomic, copy) NSArray *storyGroupV2Items;
@property (nonatomic) long long storyTTL;
@property (nonatomic) BOOL isActiveData;

+ (id)storyGroupV2ItemsJSONTransformer;
+ (id)itemIDsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
