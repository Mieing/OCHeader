@class NSString, NSNumber, NSDictionary;

@interface AWELiveVideoFeedModel : NSObject

@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) NSNumber *userID;
@property (nonatomic) long long adType;
@property (nonatomic) long long roomStatus;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSString *originRoomData;
@property (retain, nonatomic) NSDictionary *originRoomDict;
@property (retain, nonatomic) NSString *logID;
@property (retain, nonatomic) NSString *requestID;
@property (nonatomic) BOOL enableWormhole;
@property (nonatomic) long long adSourceType;
@property (nonatomic) BOOL isLiveWhiteAd;
@property (nonatomic) BOOL needDowngrade;
@property (nonatomic) BOOL isEcomCart;
@property (retain, nonatomic) NSDictionary *previewExtra;
@property (retain, nonatomic) NSDictionary *revLinkData;
@property (copy, nonatomic) NSString *filterReason;
@property (nonatomic) BOOL disenableHotRefresh;
@property (nonatomic) BOOL visibleDoubleCheck;
@property (nonatomic) unsigned long long visibleType;
@property (nonatomic) long long ntpDiffTime;
@property (nonatomic) long long distributionScene;
@property (copy, nonatomic) NSString *msg;

- (id)initWithRoomID:(id)a0 userID:(id)a1;
- (void).cxx_destruct;

@end
