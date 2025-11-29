@class NSString, NSDictionary, NSArray;
@protocol AWEPayRewardInfoModel;

@interface AWEPayRewardResultResponse : CJPayBaseResponse

@property (copy, nonatomic) NSString *issueRewardResult;
@property (copy, nonatomic) NSDictionary *closeButtonModal;
@property (copy, nonatomic) NSArray<AWEPayRewardInfoModel> *rewardInfos;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)a0;

- (void).cxx_destruct;
- (BOOL)isSuccess;

@end
