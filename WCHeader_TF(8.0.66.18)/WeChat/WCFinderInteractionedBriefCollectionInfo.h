@class NSString;

@interface WCFinderInteractionedBriefCollectionInfo : NSObject <PBCoding>

@property (nonatomic) unsigned long long identifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *coverImageURL;
@property (nonatomic) long long feedCount;
@property (nonatomic) int collectionTopicType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)infoWithCollectionInfo:(id)a0;
+ (void)PBArrayAdd_identifier;
+ (void)PBArrayAdd_name;
+ (void)PBArrayAdd_coverImageURL;
+ (void)PBArrayAdd_feedCount;
+ (void)PBArrayAdd_collectionTopicType;
+ (void)initialize;

- (id)collectionInfo;
- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
