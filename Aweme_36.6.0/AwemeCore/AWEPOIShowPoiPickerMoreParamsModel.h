@class NSString, NSArray;

@interface AWEPOIShowPoiPickerMoreParamsModel : NSObject

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *activityDescription;
@property (copy, nonatomic) NSString *activityUrl;
@property (copy, nonatomic) NSString *activityFenseType;
@property (copy, nonatomic) NSArray *topics;
@property (nonatomic) BOOL isFromEdit;
@property (copy, nonatomic) NSString *currentPoiId;
@property (copy, nonatomic) NSString *currentPoiName;
@property (copy, nonatomic) NSString *currentPoiDesc;
@property (copy, nonatomic) NSString *activitySource;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *creationID;
@property (copy, nonatomic) NSString *shootWay;
@property (nonatomic) long long poiAnchorTabDefault;
@property (copy, nonatomic) NSString *cpsInfo;
@property (copy, nonatomic) NSString *poiContentExtra;
@property (nonatomic) BOOL isFromNewLive;
@property (nonatomic) BOOL isDuringLive;
@property (nonatomic) BOOL isFromPublishPOIEntry;

- (void).cxx_destruct;

@end
