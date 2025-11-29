@class NSString, AWEPOIRecommendActivityModel, NSArray, AWEPOIInfoModel, NSDictionary;

@interface AWEStudioPOIPublishTrackerModel : NSObject

@property (copy, nonatomic) NSString *poiEnterMethod;
@property (copy, nonatomic) NSString *defaultSelectedPoiId;
@property (copy, nonatomic) NSString *defaultSelectedPoiStyle;
@property (nonatomic) BOOL keepDefaultPoi;
@property (retain, nonatomic) AWEPOIInfoModel *selectedPOI;
@property (retain, nonatomic) AWEPOIRecommendActivityModel *activity;
@property (copy, nonatomic) NSArray *poiStickerIds;
@property (nonatomic) BOOL isNLPPOI;
@property (nonatomic) BOOL isLocationBasedPOI;
@property (nonatomic) BOOL isCPSRewardPOI;
@property (copy, nonatomic) NSDictionary *lastRequestPOILogpb;
@property (copy, nonatomic) NSArray *poiRecommendChallengeIDs;

- (void).cxx_destruct;

@end
