@class NSString, NSMutableArray;

@interface GamePlayTogetherDynamicItemList : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *itemList;
@property (nonatomic) BOOL hasMoreDynamicItem;
@property (retain, nonatomic) NSString *lastBuffer;

+ (void)initialize;

@end
