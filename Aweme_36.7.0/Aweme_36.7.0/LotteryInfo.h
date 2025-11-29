@class GPBInt64ObjectDictionary, NSString, LotteryPrize, GPBInt64Int64Dictionary, NSMutableArray, LaunchTaskInfo;

@interface LotteryInfo : IESLivePBBaseMessage

@property (nonatomic) long long remainTime;
@property (nonatomic) long long startCountDownTime;
@property (nonatomic) unsigned long long candidateState;
@property (nonatomic) long long candidateEventMessageVersion;
@property (nonatomic) long long userHasOrdered;
@property (nonatomic) long long isFromEnterRoom;
@property (nonatomic) long long lotteryId;
@property (copy, nonatomic) NSString *ownerUserId;
@property (copy, nonatomic) NSString *anchorId;
@property (nonatomic) int ownerType;
@property (nonatomic) long long roomId;
@property (nonatomic) int status;
@property (retain, nonatomic) LotteryPrize *prizeInfo;
@property (nonatomic) BOOL hasPrizeInfo;
@property (retain, nonatomic) NSMutableArray *conditionsArray;
@property (readonly, nonatomic) unsigned long long conditionsArray_Count;
@property (nonatomic) long long prizeCount;
@property (nonatomic) long long luckyCount;
@property (nonatomic) long long countDown;
@property (nonatomic) long long startTime;
@property (nonatomic) long long drawTime;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long realLuckyCount;
@property (nonatomic) long long totalGrantCount;
@property (nonatomic) long long withdrawCount;
@property (nonatomic) long long realDrawTime;
@property (retain, nonatomic) NSMutableArray *luckyUsersArray;
@property (readonly, nonatomic) unsigned long long luckyUsersArray_Count;
@property (nonatomic) long long currentTime;
@property (nonatomic) long long candidateNum;
@property (copy, nonatomic) NSString *lotteryIdStr;
@property (copy, nonatomic) NSString *roomIdStr;
@property (copy, nonatomic) NSString *secAnchorId;
@property (copy, nonatomic) NSString *secOwnerUserId;
@property (retain, nonatomic) NSMutableArray *expandActivityInfoListArray;
@property (readonly, nonatomic) unsigned long long expandActivityInfoListArray_Count;
@property (nonatomic) BOOL useNewDrawInteraction;
@property (copy, nonatomic) NSString *launchTaskId;
@property (nonatomic) int index;
@property (retain, nonatomic) LaunchTaskInfo *launchTaskInfo;
@property (nonatomic) BOOL hasLaunchTaskInfo;
@property (copy, nonatomic) NSString *clientBizData;
@property (copy, nonatomic) NSString *serverBizData;
@property (copy, nonatomic) NSString *uiConfig;
@property (nonatomic) long long enabledDilatation;
@property (copy, nonatomic) NSString *dilatationConfigDetail;
@property (nonatomic) BOOL dilatationNow;
@property (nonatomic) long long prizeCountBeforeDilatation;
@property (nonatomic) long long luckyCountBeforeDilatation;
@property (retain, nonatomic) GPBInt64ObjectDictionary *extraAwardServerBizData;
@property (readonly, nonatomic) unsigned long long extraAwardServerBizData_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *extraAwardUiConfig;
@property (readonly, nonatomic) unsigned long long extraAwardUiConfig_Count;
@property (retain, nonatomic) GPBInt64ObjectDictionary *extraAwardClientBizData;
@property (readonly, nonatomic) unsigned long long extraAwardClientBizData_Count;
@property (retain, nonatomic) GPBInt64Int64Dictionary *extraAwardLuckyCount;
@property (readonly, nonatomic) unsigned long long extraAwardLuckyCount_Count;

+ (id)lotteryWithMessage:(id)a0;
+ (id)descriptor;

@end
