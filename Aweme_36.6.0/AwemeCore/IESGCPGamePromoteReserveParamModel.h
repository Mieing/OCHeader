@class NSString, NSNumber;

@interface IESGCPGamePromoteReserveParamModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *contentId;
@property (retain, nonatomic) NSNumber *reserveState;
@property (retain, nonatomic) NSNumber *scene;
@property (copy, nonatomic) NSString *subScene;
@property (copy, nonatomic) NSString *promoterId;
@property (copy, nonatomic) NSString *userNickName;
@property (copy, nonatomic) NSString *trafficSource;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *creativeId;
@property (nonatomic) BOOL isAd;
@property (copy, nonatomic) NSString *adId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *adLogExtra;
@property (copy, nonatomic) NSString *requestId;
@property (copy, nonatomic) NSString *isOtherChannel;
@property (retain, nonatomic) NSNumber *adSourceType;
@property (retain, nonatomic) NSNumber *stockType;
@property (retain, nonatomic) NSNumber *originalSystemOrigin;
@property (nonatomic) BOOL ifDou;
@property (copy, nonatomic) NSString *promoteInstanceId;
@property (nonatomic) BOOL needShowSuccessNotice;
@property (nonatomic) BOOL enableCancelReserve;
@property (nonatomic) BOOL needShowCancelAlert;
@property (retain, nonatomic) NSNumber *reserveAlertType;
@property (copy, nonatomic) NSString *reportParams;
@property (copy, nonatomic) NSString *isRsvp;
@property (nonatomic) BOOL useParamPassing;
@property (retain, nonatomic) NSNumber *reserveType;
@property (copy, nonatomic) NSString *reserveVersionNum;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
