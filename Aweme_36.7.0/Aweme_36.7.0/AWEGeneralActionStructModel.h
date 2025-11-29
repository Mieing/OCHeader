@class NSString, NSMutableArray, AWEActionResponseModel;

@interface AWEGeneralActionStructModel : IESIMBaseApiModel

@property (retain, nonatomic) NSMutableArray *buttons;
@property (copy, nonatomic) NSString *requestTag;
@property (copy, nonatomic) NSString *requestExtra;
@property (nonatomic) long long actionStatus;
@property (retain, nonatomic) AWEActionResponseModel *resultModel;

+ (id)buttonsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)actionStatusJSONTransformer;

- (void).cxx_destruct;

@end
