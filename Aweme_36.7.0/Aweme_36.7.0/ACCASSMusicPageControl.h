@class NSMutableArray;

@interface ACCASSMusicPageControl : UIView

@property (retain, nonatomic) NSMutableArray *dotArray;
@property (nonatomic) unsigned long long currentPage;
@property (nonatomic) unsigned long long numberOfPages;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
