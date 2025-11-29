@class NSString, NSNumber, NSDictionary;
@protocol IESLiveRoomService;

@interface LiveEnterRoomRequestModel : IESLiveDynamicModel

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSString *sourcePage;
@property (copy, nonatomic) NSString *liveReason;
@property (nonatomic) BOOL isLogin;
@property (copy, nonatomic) NSString *fromUserID;
@property (nonatomic) BOOL hasPreEntered;
@property (copy, nonatomic) NSString *enterSourceExtra;
@property (copy, nonatomic) NSString *videoId;
@property (nonatomic) long long feedDrawTagId;
@property (retain, nonatomic) NSNumber *preferTagId;
@property (retain, nonatomic) NSString *secRenqibaoBuyerid;
@property (retain, nonatomic) NSString *secDouPlusBuyerID;
@property (copy, nonatomic) NSString *creativeID;
@property (copy, nonatomic) NSString *reqID;
@property (copy, nonatomic) NSString *ecomGoodsList;
@property (retain, nonatomic) NSNumber *linkUserId;
@property (copy, nonatomic) NSString *shopGuideId;
@property (nonatomic) long long requestSource;
@property (nonatomic) BOOL isEnterFromSchema;
@property (nonatomic) long long filterSceneType;
@property (copy, nonatomic) NSDictionary *businessParams;

+ (id)initWithRoomModel:(id)a0 context:(id)a1 sourcePage:(id)a2;
+ (id)adTrackExtraWithContext:(id)a0;

- (id)deviceScore;
- (id)buildRequestParams;
- (id)initWithRoomModel:(id)a0;
- (id)buildPreloadRequestParams;
- (void).cxx_destruct;

@end
