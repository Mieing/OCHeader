@class NSString, UILabel, UIView;

@interface AWEAlbumDetailEntryView : UIView

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *contentLabel;

- (void)updateWithCurrentIndex:(long long)a0 totalCount:(long long)a1;
- (id)initWithStyle:(unsigned long long)a0 title:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
