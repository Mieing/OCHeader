@class AWERiskPreventModel, NSString, AWESearchGlobalDoodleConfigModel, AWESearchAdModel;

@interface AWESearchPersonBusinessConfigModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (retain, nonatomic) AWESearchAdModel *adModel;
@property (copy, nonatomic) NSString *correctName;
@property (copy, nonatomic) NSString *backtrace;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *globalDoodleConfig;
@property (nonatomic) long long doubleColumnLayoutStyle;

+ (id)globalDoodleConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
