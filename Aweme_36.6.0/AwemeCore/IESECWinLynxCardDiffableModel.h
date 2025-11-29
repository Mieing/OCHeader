@class IESECWinHeaderSectionStyle, IESECWinTabListModel, NSString, IESECWinContext, IESECWinLynxCardResponse, IESECLynxCardModel, IESECServiceProxy, IESECLynxCard;
@protocol IESECWinLynxCardService, IESECWinGoodsService, IESECWinTabLayoutService;

@interface IESECWinLynxCardDiffableModel : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (retain, nonatomic) IESECServiceProxy<IESECWinGoodsService> *goodsService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinLynxCardService> *lynxCardService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabLayoutService> *tabLayoutService;
@property (nonatomic) BOOL stickyOrigin;
@property (readonly, nonatomic) IESECWinLynxCardResponse *lynxModel;
@property (readonly, weak, nonatomic) IESECWinContext *context;
@property (retain, nonatomic) IESECLynxCardModel *cellViewModel;
@property (weak, nonatomic) IESECLynxCard *cellView;
@property (nonatomic) unsigned long long itemType;
@property (weak, nonatomic) IESECWinTabListModel *tab;
@property (nonatomic) BOOL isHeadCard;
@property (retain, nonatomic) IESECWinHeaderSectionStyle *sectionStyle;
@property (nonatomic) unsigned long long splitConfigType;
@property (nonatomic) long long anchorPosition;
@property (nonatomic) double stickyHeight;
@property (nonatomic) BOOL shouldSticky;
@property (nonatomic) BOOL hasSetStickyHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cardRect;
@property (nonatomic) long long itemIndex;
@property (nonatomic) BOOL isFirstLoadUpdateType;
@property (nonatomic) BOOL isFinishFirstLoad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void)appendExtra:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void)configStickyHeight:(double)a0;
- (void)configCardFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stickyOrigin:(BOOL)a0;
- (BOOL)getStickyOrigin;
- (BOOL)showInSplit;
- (BOOL)moveInSplit;
- (BOOL)getShouldSticky;
- (BOOL)getHasSetStickyHeight;
- (void)sethasSetStickyHeight:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getcardRect;
- (BOOL)isFollowLastCardSet;
- (id)initWithLynxModel:(id)a0 winContext:(id)a1 itemType:(unsigned long long)a2;
- (unsigned long long)getSpan;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })getEdge;
- (unsigned long long)calculateWithString:(id)a0;
- (void)updateLayoutAndWidth;
- (void).cxx_destruct;

@end
