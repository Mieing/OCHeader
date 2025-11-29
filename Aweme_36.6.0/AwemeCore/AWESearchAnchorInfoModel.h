@class AWESearchAnchorIconInfoModel, NSString, AWESearchAnchorHeatInfoModel, NSNumber;

@interface AWESearchAnchorInfoModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *recommendWordType;
@property (copy, nonatomic) NSString *historyWordTag;
@property (copy, nonatomic) NSString *wordSuffix;
@property (copy, nonatomic) NSString *targetTab;
@property (retain, nonatomic) AWESearchAnchorHeatInfoModel *heatInfoModel;
@property (retain, nonatomic) AWESearchAnchorIconInfoModel *iconInfo;
@property (copy, nonatomic) NSString *logPbStr;
@property (copy, nonatomic) NSString *queryTag;
@property (copy, nonatomic) NSString *clientEngineExtra;
@property (copy, nonatomic) NSString *metaSongId;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *forceAutoRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
