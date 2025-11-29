@class MMUILabel, TextStateHistoryCalendarSection;

@interface TextStateHistoryCalendarSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) MMUILabel *topUseIconLabel;
@property (retain, nonatomic) TextStateHistoryCalendarSection *section;
@property (nonatomic) BOOL singleRowLayout;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)updateLayout;
- (void).cxx_destruct;

@end
