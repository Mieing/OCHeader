@class IESECWinHeaderAuthorTransformModel, NSString, IESECWinHeaderAuthorModel, IESECTracker, IESECWinHeaderOtherInfoModel;

@interface IESECWinAuthorObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } edge;
@property (retain, nonatomic) IESECTracker *tracker;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *passThroughAPI;
@property (retain, nonatomic) IESECWinHeaderAuthorModel *author;
@property (retain, nonatomic) IESECWinHeaderOtherInfoModel *otherInfo;
@property (nonatomic) BOOL isLiving;
@property (nonatomic) unsigned long long splitConfigType;
@property (nonatomic) double stickyHeight;
@property (nonatomic) BOOL shouldSticky;
@property (nonatomic) BOOL hasSetStickyHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cardRect;
@property (nonatomic) double contentWidth;
@property (retain, nonatomic) IESECWinHeaderAuthorTransformModel *transformStashData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void)configStickyHeight:(double)a0;
- (void)configCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)showInSplit;
- (BOOL)moveInSplit;
- (BOOL)getShouldSticky;
- (BOOL)getHasSetStickyHeight;
- (void)sethasSetStickyHeight:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getcardRect;
- (void).cxx_destruct;
- (long long)zIndex;

@end
