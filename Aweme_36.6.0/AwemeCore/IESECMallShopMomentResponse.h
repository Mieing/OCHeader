@class NSDictionary, NSString, IESECListKitListModel;

@interface IESECMallShopMomentResponse : IESECBaseApiModel

@property (retain, nonatomic) IESECListKitListModel *hybridList;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;
@property (copy, nonatomic) NSDictionary *passThroughParams;
@property (copy, nonatomic) NSString *toast;
@property (copy, nonatomic) NSDictionary *bizConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
