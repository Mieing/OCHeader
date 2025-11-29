@class NSDictionary, IESECListKitListModel;

@interface IESECShopMomentsResponse : IESECBaseApiModel

@property (retain, nonatomic) IESECListKitListModel *hybridList;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) unsigned long long cursor;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
