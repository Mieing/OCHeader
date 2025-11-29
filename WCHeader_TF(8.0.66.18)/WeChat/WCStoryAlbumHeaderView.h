@class NSArray, MMUILabel;

@interface WCStoryAlbumHeaderView : UICollectionReusableView

@property (retain, nonatomic) MMUILabel *albumTimeLabel;
@property (weak, nonatomic) MMUILabel *albumYearLabel;
@property (retain, nonatomic) NSArray *monthArray;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)setTimeStr:(id)a0 showYearLabel:(BOOL)a1;
- (BOOL)isTodayOrYesterday:(id)a0;
- (void).cxx_destruct;

@end
