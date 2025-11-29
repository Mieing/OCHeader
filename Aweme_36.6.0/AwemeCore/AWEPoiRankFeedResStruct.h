@class NSArray, NSString, AWEPoiRankConfigModel, AWEURLModel;

@interface AWEPoiRankFeedResStruct : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *rankPOIs;
@property (copy, nonatomic) NSString *rankGenre;
@property (copy, nonatomic) NSString *rankTab;
@property (copy, nonatomic) NSString *detailRank;
@property (copy, nonatomic) NSString *rankPoiDistrict;
@property (copy, nonatomic) NSString *rankTitle;
@property (retain, nonatomic) AWEURLModel *rankBarIconURL;
@property (retain, nonatomic) AWEURLModel *rankFloatIconURL;
@property (copy, nonatomic) NSString *rankTopURL;
@property (copy, nonatomic) NSString *rankBottomURL;
@property (retain, nonatomic) AWEPoiRankConfigModel *rankConfig;
@property (nonatomic) long long rankType;
@property (copy, nonatomic) NSString *ipName;
@property (copy, nonatomic) NSString *ipTheme;
@property (nonatomic) long long rankFloatIconWidth;
@property (nonatomic) long long rankFloatIconHeight;
@property (nonatomic) long long rankBarIconWidth;
@property (nonatomic) long long rankBarIconHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rankPOIsJSONTransformer;
+ (id)rankBarIconUrlJSONTransformer;
+ (id)rankFloatIconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
