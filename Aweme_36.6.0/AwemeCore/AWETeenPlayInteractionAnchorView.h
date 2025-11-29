@class UIImageView, AWEMinorAnchorInfoModel, UIView, UILabel;

@interface AWETeenPlayInteractionAnchorView : AWETeenPlayInteractionBaseElement

@property (retain, nonatomic) AWEMinorAnchorInfoModel *anchorInfo;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *titleTagLabel;
@property (retain, nonatomic) UIView *sepLine;
@property (nonatomic) BOOL hasTrackShow;

- (void)didTappedOnView:(id)a0;
- (id)truncatedString:(id)a0 withFont:(id)a1 maxWidth:(double)a2;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)viewDidLoad;

@end
