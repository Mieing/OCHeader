@class TextStateHistoryCalendarItem, MMUILabel, NSMutableArray;

@interface TextStateHistoryCalendarDayCell : UICollectionViewCell

@property (retain, nonatomic) MMUILabel *dayLabel;
@property (retain, nonatomic) NSMutableArray *iconViewList;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) TextStateHistoryCalendarItem *item;

+ (double)iconLengthForCount:(unsigned long long)a0;
+ (double)iconMarginForCount:(unsigned long long)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
