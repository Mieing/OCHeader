@class WCDataItem, WCAdRandomPickCardView, NSMutableDictionary, NSString;

@interface WCAdRandomPickCardLogic : WCAdvertiseOperationLogicBase <WCAdRandomPickCardViewDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long contentItemScene;
@property (retain, nonatomic) WCAdRandomPickCardView *cardView;
@property (nonatomic) long long logicStatus;
@property (retain, nonatomic) NSMutableDictionary *extraCardExtInfos;
@property (retain, nonatomic) NSMutableDictionary *extraPickedCardInfos;
@property (nonatomic) struct CGSize { double width; double height; } expPickCardViewSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getRandomPickCardLogicWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;

- (id)initWithDataItem:(id)a0 contentItemScene:(unsigned long long)a1;
- (void)dealloc;
- (id)fetchPickCardView;
- (id)cardInfo;
- (id)pageId;
- (void)reset;
- (void)prepare;
- (void)start;
- (void)stop;
- (void)appendExtraCardExtInfo:(id)a0 forCardId:(id)a1;
- (id)getRandomPickComponentPickedCards;
- (BOOL)isRandomPickCardPickedForCardId:(id)a0;
- (BOOL)isCardPickedInCards:(id)a0 forCardId:(id)a1;
- (long long)getRandomPickCardExpectLogicStatus;
- (id)getRandomPickCardExtInfoForCardId:(id)a0;
- (id)getRandomPickCardExtInfoFromExtraDataForCardId:(id)a0;
- (void)updateRandomPickCardSortedItemsForPageId:(id)a0 cardId:(id)a1 destIndex:(long long)a2;
- (void)onRandomPickCardViewResetCardItemsView;
- (void).cxx_destruct;

@end
