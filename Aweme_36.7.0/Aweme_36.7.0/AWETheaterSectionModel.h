@class AWETheaterEntranceGuideModel, NSString, NSArray, NSDictionary;

@interface AWETheaterSectionModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *sectionTitle;
@property (copy, nonatomic) NSString *sectionID;
@property (nonatomic) long long sectionType;
@property (nonatomic) long long renderType;
@property (copy, nonatomic) NSArray *sectionItemList;
@property (retain, nonatomic) AWETheaterEntranceGuideModel *theaterGuide;
@property (nonatomic) BOOL historyHasMore;
@property (copy, nonatomic) NSDictionary *logPassBack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)revisitGuideJSONTransformer;
+ (id)sectionItemListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
