@class TingItem;

@interface TingPlayListItem : WXPBGeneratedMessage

@property (retain, nonatomic) TingItem *item;
@property (nonatomic) int originIndex;

+ (void)initialize;

@end
