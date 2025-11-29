@class NSString, NSDictionary;

@interface AWEPOISearchLynxModel : NSObject

@property (nonatomic) BOOL enableGlobalSearch;
@property (nonatomic) BOOL isOversea;
@property (copy, nonatomic) NSString *shootWay;
@property (copy, nonatomic) NSString *creationID;
@property (copy, nonatomic) NSString *candidateLoc;
@property (copy, nonatomic) NSString *currentPoiID;
@property (copy, nonatomic) NSDictionary *autoOpenParams;
@property (nonatomic) long long tabId;
@property (copy, nonatomic) NSString *cpsInfo;
@property (copy, nonatomic) NSString *poiContentExtra;
@property (copy, nonatomic) NSString *poiActivity;
@property (copy, nonatomic) NSString *userType;
@property (copy, nonatomic) NSString *searchExtra;
@property (copy, nonatomic) NSString *lifeScene;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSDictionary *publishInfo;
@property (copy, nonatomic) NSString *currentClickedPoiID;
@property (copy, nonatomic) NSDictionary *topBarData;
@property (nonatomic) BOOL isImageAlbumStyle;
@property (copy, nonatomic) NSString *anchorAddMethod;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *lifeAnchorParamPersist;
@property (nonatomic) BOOL isCancelTagAddPoi;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
