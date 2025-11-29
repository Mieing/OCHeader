@class NSString, AWEURLModel;

@interface AWEPOIDetailTabModel : AWEBaseApiModel

@property (nonatomic) long long tabID;
@property (copy, nonatomic) NSString *tabName;
@property (copy, nonatomic) NSString *tabMobName;
@property (nonatomic) BOOL isTracked;
@property (copy, nonatomic) NSString *schemaURL;
@property (nonatomic) unsigned long long tabType;
@property (retain, nonatomic) AWEURLModel *iconURL;
@property (nonatomic) long long defaultTab;
@property (nonatomic) unsigned long long sceneType;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
