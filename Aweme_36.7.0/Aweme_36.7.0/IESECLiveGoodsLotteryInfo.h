@class NSString, NSArray, NSNumber, IESECCouponButtonModel;

@interface IESECLiveGoodsLotteryInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *winRecordID;
@property (nonatomic) long long status;
@property (nonatomic) long long taskType;
@property (nonatomic) long long lotteryType;
@property (copy, nonatomic) NSString *jumpUrl;
@property (copy, nonatomic) NSString *buttonLabel;
@property (copy, nonatomic) NSString *resultLabel;
@property (retain, nonatomic) NSNumber *openTime;
@property (retain, nonatomic) NSNumber *buyAbandonTime;
@property (retain, nonatomic) NSNumber *serverTime;
@property (copy, nonatomic) NSArray *text;
@property (readonly, nonatomic) BOOL buttonEnabled;
@property (readonly, copy, nonatomic) NSString *headerText;
@property (readonly, copy, nonatomic) NSString *contentText;
@property (retain, nonatomic) IESECCouponButtonModel *lotteryTag;
@property (copy, nonatomic) NSString *shortTitleText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shortPicJSONTransformer;
+ (id)lotteryTagJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)decreaseSeconds:(long long)a0;
- (void).cxx_destruct;

@end
