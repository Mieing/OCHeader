@class NSNumber, NSString, NSDictionary;

@interface BDADPreviewToRoomModel : NSObject

@property (retain, nonatomic) NSNumber *adID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *liveActionExtra;
@property (copy, nonatomic) NSString *actionExtra;
@property (copy, nonatomic) NSString *couponToken;
@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *searchBizTag;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *extraInfo;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *nationalTaskJumpSchema;
@property (copy, nonatomic) NSDictionary *trackUrlList;
@property (copy, nonatomic) NSDictionary *clickTrackURLList;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *extraAdType;
@property (nonatomic) BOOL shouldAutoOpenCommercialLiveLandingPage;
@property (nonatomic) BOOL isAds;
@property (nonatomic) long long adType;
@property (nonatomic) unsigned long long appTarget;

- (void).cxx_destruct;

@end
