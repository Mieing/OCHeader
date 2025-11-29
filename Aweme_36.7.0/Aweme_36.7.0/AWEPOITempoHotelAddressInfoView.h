@class UILabel, UIImageView, UIView;

@interface AWEPOITempoHotelAddressInfoView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *extraTitleLabel;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UILabel *extraSubtitleLabel;
@property (retain, nonatomic) UIView *entryView;
@property (retain, nonatomic) UIImageView *entryIcon;
@property (retain, nonatomic) UILabel *entryPrefixLabel;
@property (retain, nonatomic) UILabel *entryTitleLabel;
@property (retain, nonatomic) UIImageView *entryArrowIcon;
@property (nonatomic) long long entryShowIndex;
@property (copy, nonatomic) id /* block */ onClickAddress;
@property (copy, nonatomic) id /* block */ onClickEntry;
@property (copy, nonatomic) id /* block */ onClickEntryListItem;

+ (double)viewHeightWithInfo:(id)a0 maxWidth:(double)a1;
+ (id)getEntryInfo:(id)a0 completion:(id /* block */)a1;

- (void)onClickAddressFunction;
- (void)updateSubtitleInfo:(id)a0;
- (void)updateTitleInfo:(id)a0;
- (void)updateEntryInfo:(id)a0;
- (void)checkIfSubtitleFitOneChar:(id)a0;
- (void)onClickEntryFunction;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)maxWidth;
- (void)updateWithInfo:(id)a0;

@end
