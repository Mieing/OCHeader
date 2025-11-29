@class NSString, NSArray, AWEYAPRPFavourEffectInfo, AWEYAPRPConditionCheckInfo, NSNumber;

@interface AWEIMDouyinRedPacketModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *orderId;
@property (nonatomic) long long amount;
@property (nonatomic) long long singleAmount;
@property (nonatomic) long long receiveAmount;
@property (nonatomic) long long count;
@property (nonatomic) long long receiveCount;
@property (nonatomic) long long currentUserReceiveAmount;
@property (nonatomic) BOOL isOverDue;
@property (nonatomic) BOOL isAllReceived;
@property (nonatomic) unsigned long long receiveStatus;
@property (nonatomic) unsigned long long redPacketType;
@property (nonatomic) unsigned long long redPacketSubtype;
@property (nonatomic) long long sendTime;
@property (nonatomic) long long receiveTime;
@property (nonatomic) long long dueTime;
@property (nonatomic) BOOL enableCurrentUserReceive;
@property (copy, nonatomic) NSString *statusDesc;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *openTitle;
@property (copy, nonatomic) NSString *titlePrefix;
@property (copy, nonatomic) NSString *titleMid;
@property (copy, nonatomic) NSString *titleSuffix;
@property (copy, nonatomic) NSString *allRecvCostTime;
@property (copy, nonatomic) NSString *changeText;
@property (copy, nonatomic) NSString *changeURL;
@property (copy, nonatomic) NSString *coverId;
@property (copy, nonatomic) NSString *refundAddr;
@property (copy, nonatomic) NSString *openMode;
@property (copy, nonatomic) NSString *openCommand;
@property (readonly, nonatomic) BOOL isCommandRedPacket;
@property (nonatomic) long long allRecvTime;
@property (copy, nonatomic) NSString *reachRecvLimitText;
@property (nonatomic) long long recvCondition;
@property (nonatomic) long long curUserRewardAmount;
@property (copy, nonatomic) NSString *teaSource;
@property (copy, nonatomic) NSString *favourRpRefundDesc;
@property (retain, nonatomic) AWEYAPRPFavourEffectInfo *favourRpEffectInfo;
@property (nonatomic) long long recvAction;
@property (readonly, nonatomic) unsigned long long infoStatus;
@property (readonly, nonatomic) long long openRedPacketStatus;
@property (readonly, nonatomic) BOOL isMultiRandom;
@property (readonly, nonatomic) BOOL isBlessRedPacket;
@property (readonly, nonatomic) BOOL isSpringFestivalRedPacket;
@property (readonly, nonatomic) BOOL isVideoRedPacket;
@property (nonatomic) BOOL isPreviewScene;
@property (retain, nonatomic) AWEYAPRPConditionCheckInfo *conditionInfo;
@property (nonatomic) long long coverType;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *previewTips;
@property (retain, nonatomic) NSNumber *isShowRecvBtn;
@property (copy, nonatomic) NSArray *recvUserIDs;

+ (id)conditionInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)getOpenModeType;
- (void).cxx_destruct;

@end
