@class NSString, NSIndexPath;

@interface AWEPostPageCellElement : AWEPostPageElement

@property (nonatomic) BOOL needsUpdate;
@property (readonly, copy, nonatomic) NSString *cellIdentifier;
@property (readonly, copy, nonatomic) NSString *cellClass;
@property (readonly, nonatomic) NSIndexPath *indexPath;

- (id)anchorModel;
- (id)anchorContext;
- (BOOL)enableStateWithFullType:(id)a0;
- (void)setupCell:(id)a0;
- (void)showAnchorContentPageWithController:(id)a0;
- (BOOL)anchor:(id)a0 shouldSelectAnchorWithType:(long long)a1;
- (BOOL)isInListDatasource;
- (BOOL)enablePoiAnchorNotMutex;
- (id)convertToAnchorSubscriberType;
- (BOOL)isPassiveAnchorEnabled;
- (long long)currentAnchorBusinessType;
- (void)actionBlockWhenAnchorVCDisAppearIfNeed:(id /* block */)a0;
- (BOOL)checkHigherPriorityAnchorWithReason:(unsigned long long *)a0;
- (void)setNeedsUpdate;
- (id)contentView;
- (BOOL)isSelected;
- (id)description;
- (void)reload;
- (id)anchor;
- (void)setViewModel:(id)a0;
- (id)cell;
- (void)didSelect;
- (BOOL)canSelect;

@end
