@class NSArray, IESECWinTabListModel, NSString;

@interface IESECWinTabObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (retain, nonatomic) NSArray *tabs;
@property (weak, nonatomic) IESECWinTabListModel *selectTab;
@property (nonatomic) BOOL isWindowUpgrade;
@property (nonatomic) unsigned long long splitConfigType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cardRect;
@property (nonatomic) BOOL shouldSticky;
@property (nonatomic) BOOL hasSetStickyHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)configCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)showInSplit;
- (BOOL)moveInSplit;
- (BOOL)getShouldSticky;
- (BOOL)getHasSetStickyHeight;
- (void)sethasSetStickyHeight:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getcardRect;
- (void).cxx_destruct;

@end
