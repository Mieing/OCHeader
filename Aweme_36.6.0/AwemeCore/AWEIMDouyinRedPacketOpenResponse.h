@class AWEYapLotteryResultInfo, AWEIMDouyinRedPacketUserInfo, AWEIMDouyinRedPacketModel, AWEIMDouyinRedPacketEmoticonModel, NSArray, NSString, AWEYapRPDetailPromotionInfo;

@interface AWEIMDouyinRedPacketOpenResponse : AWEBaseApiModel

@property (retain, nonatomic) AWEIMDouyinRedPacketModel *info;
@property (retain, nonatomic) AWEIMDouyinRedPacketUserInfo *user;
@property (retain, nonatomic) AWEIMDouyinRedPacketEmoticonModel *emoticonModel;
@property (copy, nonatomic) NSArray *emoticonModels;
@property (nonatomic) unsigned long long openStatus;
@property (nonatomic) unsigned long long businessCode;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) long long receiveCostTime;
@property (copy, nonatomic) NSArray *users;
@property (nonatomic) long long minTime;
@property (copy, nonatomic) NSString *merchantId;
@property (copy, nonatomic) NSString *authUrl;
@property (copy, nonatomic) NSString *businessMsg;
@property (copy, nonatomic) NSString *recordUrl;
@property (retain, nonatomic) AWEYapRPDetailPromotionInfo *detailPromotionInfo;
@property (retain, nonatomic) AWEYapLotteryResultInfo *lotteryResultInfo;

+ (id)userJSONTransformer;
+ (id)infoJSONTransformer;
+ (id)usersJSONTransformer;
+ (id)detailPromotionInfoJSONTransformer;
+ (id)lotteryResultInfoJSONTransformer;
+ (id)emoticonModelJSONTransformer;
+ (id)emoticonModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
