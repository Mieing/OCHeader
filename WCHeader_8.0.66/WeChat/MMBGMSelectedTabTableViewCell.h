@class MMUIButton, PAGView, UIImageView, UILabel, UIView, MMWebImageView;
@protocol MMBGMSelectedTabTableViewCellDelegate;

@interface MMBGMSelectedTabTableViewCell : MMBGMSelectedTabTableBaseCell

@property (retain, nonatomic) MMWebImageView *coverView;
@property (retain, nonatomic) UILabel *songNameLabel;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *songDurationLabel;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIView *coverMaskView;
@property (retain, nonatomic) PAGView *pagView;
@property (retain, nonatomic) UIImageView *checkImageView;
@property (retain, nonatomic) MMUIButton *editBgmButton;
@property (retain, nonatomic) MMUIButton *favBGMButton;
@property (weak, nonatomic) id<MMBGMSelectedTabTableViewCellDelegate> bgmSelectedCellDelegate;

+ (id)cellID;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)setup;
- (void)setIsCellSelected:(BOOL)a0;
- (void)updateWithMusicData:(id)a0 config:(id)a1 globalConfig:(id)a2 sourceTabType:(unsigned long long)a3;
- (void)layoutSubviews;
- (void)onClickEditBgmButton:(id)a0;
- (void)favBGMButtonDidTouchUpInside:(id)a0;
- (struct CGSize { double x0; double x1; })calcFavButtonSize;
- (void)updateFavButtonAccessibility;
- (id)genReportDictWithBtn:(id)a0;
- (void).cxx_destruct;

@end
