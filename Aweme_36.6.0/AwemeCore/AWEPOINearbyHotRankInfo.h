@class NSString, AWEURLModel;

@interface AWEPOINearbyHotRankInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rankName;
@property (copy, nonatomic) NSString *rankNameV2;
@property (copy, nonatomic) NSString *rankScheme;
@property (copy, nonatomic) NSString *rankPosition;
@property (retain, nonatomic) AWEURLModel *rankIcon;
@property (copy, nonatomic) NSString *bottomBarText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
