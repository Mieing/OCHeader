@class NSString, NSArray, IESLLPOITagRateClientConfigModel;

@interface IESLLPOIAwemeTagRateModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long extendTime;
@property (copy, nonatomic) NSString *descInFriendFeed;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *smallDesc;
@property (copy, nonatomic) NSArray *rateGrades;
@property (copy, nonatomic) NSString *couponDesc;
@property (copy, nonatomic) NSString *POIName;
@property (nonatomic) BOOL shouldShowBottomBar;
@property (nonatomic) unsigned long long bottomBarType;
@property (copy, nonatomic) NSArray *expGroups;
@property (copy, nonatomic) NSString *schemeURL;
@property (copy, nonatomic) IESLLPOITagRateClientConfigModel *clientConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rateGradesJSONTransformer;
+ (id)expGroupsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
