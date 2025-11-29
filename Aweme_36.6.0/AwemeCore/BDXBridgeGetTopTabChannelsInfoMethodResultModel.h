@class NSString, NSNumber, NSArray;

@interface BDXBridgeGetTopTabChannelsInfoMethodResultModel : BDXBridgeModel

@property (nonatomic) BOOL isNearbyTabShow;
@property (nonatomic) BOOL isNearbyDual;
@property (copy, nonatomic) NSString *nearbyTabName;
@property (copy, nonatomic) NSString *currentSceneL1;
@property (nonatomic) BOOL isInSearch;
@property (retain, nonatomic) NSNumber *isGrouponTabVisible;
@property (retain, nonatomic) NSNumber *isGrouponSinglePageVisible;
@property (retain, nonatomic) NSNumber *popUpCanShow;
@property (retain, nonatomic) NSArray *channelsInfo;

+ (id)channelsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
