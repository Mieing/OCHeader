@class UILabel, UIImageView, UIView;

@interface AWEPOITempoAddressInfoView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *extraTitleLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIView *entryView;
@property (copy, nonatomic) id /* block */ onClickAddress;
@property (copy, nonatomic) id /* block */ onClickEntry;
@property (copy, nonatomic) id /* block */ onClickEntryListItem;

+ (id)getEntryInfo:(id)a0;
+ (double)viewHeightWithInfo:(id)a0 maxWidth:(double)a1;

- (void)onClickAddressFunction;
- (void)updateEntryList:(id)a0;
- (void)updateSubtitleInfo:(id)a0;
- (void)updateTitleInfo:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)maxWidth;
- (void)updateWithInfo:(id)a0;

@end
