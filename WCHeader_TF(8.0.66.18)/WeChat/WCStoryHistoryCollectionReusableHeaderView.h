@class NSString, MMUILabel, NSArray;

@interface WCStoryHistoryCollectionReusableHeaderView : UICollectionReusableView

@property (retain, nonatomic) MMUILabel *timeLabel;
@property (retain, nonatomic) MMUILabel *yearLabel;
@property (copy, nonatomic) NSString *time;
@property (retain, nonatomic) NSArray *monthArray;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupView;
- (void)setTime:(id)a0 showYear:(BOOL)a1;
- (BOOL)isCurrentMonth:(id)a0;
- (void).cxx_destruct;

@end
