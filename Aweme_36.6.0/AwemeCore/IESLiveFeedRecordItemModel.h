@class UILabel, ScheduledItem, NSString;

@interface IESLiveFeedRecordItemModel : IESLiveDynamicModel <HTSLiveFeedItem, IESLiveFeedDrawerItemProtocol>

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) ScheduledItem *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *drawerPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct CGSize { double x0; double x1; })itemSizeInCollectionView:(id)a0 indexPath:(id)a1;
- (void).cxx_destruct;
- (Class)cellClass;
- (Class)sectionClass;

@end
