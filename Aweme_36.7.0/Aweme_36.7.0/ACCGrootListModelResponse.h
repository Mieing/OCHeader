@class ACCGrootListModel;

@interface ACCGrootListModelResponse : ACCBaseApiModel

@property (retain, nonatomic) ACCGrootListModel *data;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)dataJSONTransformer;

- (void).cxx_destruct;

@end
