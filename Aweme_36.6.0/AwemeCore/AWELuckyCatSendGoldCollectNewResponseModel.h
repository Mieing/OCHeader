@class NSString, AWELuckyCatSendGoldCollectTaskFinishInfo;

@interface AWELuckyCatSendGoldCollectNewResponseModel : AWELiteBaseApiModel

@property (copy, nonatomic) NSString *toast;
@property (retain, nonatomic) AWELuckyCatSendGoldCollectTaskFinishInfo *taskFinishInfo;
@property (copy, nonatomic) NSString *effectID;

+ (id)taskFinishInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
