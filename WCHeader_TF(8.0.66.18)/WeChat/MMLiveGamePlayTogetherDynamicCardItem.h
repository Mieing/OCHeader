@class GamePlayTogetherDynamicItemList_GamePlayTogetherDynamicItem;

@interface MMLiveGamePlayTogetherDynamicCardItem : MMLiveGamePlayTogetherOperationItem

@property (nonatomic) double contentWidth;
@property (retain, nonatomic) GamePlayTogetherDynamicItemList_GamePlayTogetherDynamicItem *internalDynamicItem;

- (id)initWithModel:(id)a0 contentWidth:(double)a1;
- (double)heightForCell;
- (void).cxx_destruct;

@end
