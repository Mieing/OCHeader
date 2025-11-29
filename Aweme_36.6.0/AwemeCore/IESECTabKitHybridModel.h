@class NSDictionary, IESECTabKitHybridBizConfigModel, IESECListKitListModel;

@interface IESECTabKitHybridModel : IESECBaseApiModel

@property (retain, nonatomic) IESECListKitListModel *hybridList;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (copy, nonatomic) NSDictionary *passThroughParams;
@property (retain, nonatomic) IESECTabKitHybridBizConfigModel *bizConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
