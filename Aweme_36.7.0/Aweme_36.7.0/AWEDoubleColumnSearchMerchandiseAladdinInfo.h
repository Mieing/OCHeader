@class AWESearchAladdinLogDict, AWEActivityModel;

@interface AWEDoubleColumnSearchMerchandiseAladdinInfo : AWEBaseApiModel

@property (retain, nonatomic) AWESearchAladdinLogDict *logDict;
@property (retain, nonatomic) AWEActivityModel *activityInfo;

+ (id)activityInfoJSONTransformer;
+ (id)logDictJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
