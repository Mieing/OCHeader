@class AWERiskPreventModel, NSString, AWESearchGlobalDoodleConfigModel, AWESearchAdModel, NSNumber;

@interface AWESearchMusicBusinessConfigModel : AWEBaseApiModel

@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (retain, nonatomic) AWESearchAdModel *adModel;
@property (copy, nonatomic) NSString *correctName;
@property (copy, nonatomic) NSString *backtrace;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (retain, nonatomic) NSNumber *renderType;
@property (copy, nonatomic) NSString *musicFilterType;

+ (id)extraModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)getSelectedTab;
- (void).cxx_destruct;

@end
