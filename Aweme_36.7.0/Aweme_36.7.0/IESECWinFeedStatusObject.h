@class IESECWinTabListModel, NSString;

@interface IESECWinFeedStatusObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long tabStatus;
@property (nonatomic) BOOL hasTab;
@property (nonatomic) BOOL isShowEmpty;
@property (weak, nonatomic) IESECWinTabListModel *tab;
@property (nonatomic) BOOL isSingleColumn;
@property (nonatomic) BOOL isNewEmptyView;
@property (nonatomic) unsigned long long splitConfigType;
@property (nonatomic) BOOL shouldSticky;
@property (nonatomic) BOOL hasSetStickyHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cardRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void)configCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)showInSplit;
- (BOOL)moveInSplit;
- (BOOL)getShouldSticky;
- (BOOL)getHasSetStickyHeight;
- (void)sethasSetStickyHeight:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getcardRect;
- (void).cxx_destruct;

@end
