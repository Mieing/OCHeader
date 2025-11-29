@class NSString, AWELuckyCatTaskDoneResponseDataModel;

@interface AWELuckyCatTaskDoneResponseModel : AWEBaseApiModel

@property (nonatomic) long long errorNo;
@property (copy, nonatomic) NSString *errorTips;
@property (retain, nonatomic) AWELuckyCatTaskDoneResponseDataModel *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
