@class WAAppItemData;

@interface WAStarMoveInfo : MMObject

@property (nonatomic) unsigned long long moveType;
@property (retain, nonatomic) WAAppItemData *moveItem;
@property (retain, nonatomic) WAAppItemData *toPreItem;
@property (retain, nonatomic) WAAppItemData *toNextItem;

- (void).cxx_destruct;

@end
