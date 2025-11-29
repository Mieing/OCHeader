@class NSString, AWELuckyCatSendGoldCollectTaskFinishInfo;

@interface AWELuckyCatSendGoldCollectResponseModel : AWEBaseApiModel

@property (nonatomic) long long errNO;
@property (copy, nonatomic) NSString *errTips;
@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) AWELuckyCatSendGoldCollectTaskFinishInfo *taskFinishInfo;
@property (copy, nonatomic) NSString *effectID;

+ (id)taskFinishInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
