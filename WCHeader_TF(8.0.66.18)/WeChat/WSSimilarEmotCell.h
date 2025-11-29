@class NSArray, NSMutableArray, NSString;
@protocol WSSimilarEmotCellDelegate;

@interface WSSimilarEmotCell : MMTableViewCell <WSSimilarEmotItemDelegate>

@property (retain, nonatomic) NSMutableArray *itemViewList;
@property (retain, nonatomic) NSArray *itemModels;
@property (weak, nonatomic) id<WSSimilarEmotCellDelegate> delegate;
@property (nonatomic) unsigned long long startIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)itemWidthWithCellWidth:(double)a0;
+ (double)itemGapPerLine:(double)a0;
+ (long long)itemCountPerLine:(double)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)configSimilarItems:(id)a0 itemViewWidth:(double)a1;
- (void)layoutSubviews;
- (void)handleItemClick:(id)a0 model:(id)a1;
- (void)handleItemLongPress:(id)a0 model:(id)a1;
- (void).cxx_destruct;

@end
