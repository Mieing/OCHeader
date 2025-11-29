@class NSArray, NSString, IESECShopBizExtraModel;

@interface IESECStoreFilterDiffableModel : IESECShopBaseFilterDiffableModel

@property (nonatomic) long long currentSortType;
@property (nonatomic, getter=isSearch) BOOL search;
@property (copy, nonatomic) NSArray *selectButtons;
@property (nonatomic) BOOL hideSelectedButton;
@property (retain, nonatomic) IESECShopBizExtraModel *bizExtra;
@property (nonatomic) BOOL showSelectPanelButton;
@property (copy, nonatomic) NSString *selectPanelSchema;

- (void).cxx_destruct;

@end
