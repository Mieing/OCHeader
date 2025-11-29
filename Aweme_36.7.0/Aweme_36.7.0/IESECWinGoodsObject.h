@class IESECRelationGoodsCardViewModel, IESECWinTabListModel, NSDictionary, IESECWinVideoInfo, NSString;

@interface IESECWinGoodsObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (retain, nonatomic) IESECRelationGoodsCardViewModel *product;
@property (nonatomic) unsigned long long tabType;
@property (nonatomic) unsigned long long itemType;
@property (nonatomic) long long recommendGoodsType;
@property (nonatomic) unsigned long long tabLayoutType;
@property (nonatomic) long long anchorPosition;
@property (nonatomic) long long index;
@property (weak, nonatomic) IESECWinTabListModel *tab;
@property (copy, nonatomic) NSDictionary *dynamicInsertCardInfo;
@property (nonatomic) BOOL isInsertCard;
@property (nonatomic) long long itemIndex;
@property (copy, nonatomic) NSDictionary *uiLogExtra;
@property (nonatomic) BOOL updatedWithLowPriceComponent;
@property (nonatomic) BOOL hasRequestRefreshParam;
@property (retain, nonatomic) IESECWinVideoInfo *video;
@property (nonatomic) BOOL isContinuePlay;
@property (nonatomic) double currentTime;
@property (nonatomic) BOOL hasPlayed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (id)playItem;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeForObject;
- (void).cxx_destruct;

@end
