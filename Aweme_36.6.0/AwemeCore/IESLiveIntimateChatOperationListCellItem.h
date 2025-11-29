@class IESLiveLinkMicListUserAdapterModel, NSArray;

@interface IESLiveIntimateChatOperationListCellItem : IESLiveDynamicModel

@property (nonatomic) long long sectionType;
@property (retain, nonatomic) IESLiveLinkMicListUserAdapterModel *userModel;
@property (nonatomic) long long applyReasonLines;
@property (nonatomic) long long exposedAppliersCount;
@property (copy, nonatomic) NSArray *moreApplierAvatarURLs;
@property (nonatomic) BOOL hasMoreAppliers;
@property (nonatomic) BOOL showPaidPrice;
@property (copy, nonatomic) id /* block */ operation;
@property (copy, nonatomic) id /* block */ tapAvatarCallback;

- (void).cxx_destruct;
- (double)cellHeight;

@end
