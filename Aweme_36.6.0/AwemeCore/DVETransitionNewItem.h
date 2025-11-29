@class UIImageView, DVETransitionImageView, UILabel, DVECircularProgressView;

@interface DVETransitionNewItem : DVEPickerBaseCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DVETransitionImageView *iconView;
@property (retain, nonatomic) UIImageView *downloadView;
@property (retain, nonatomic) DVECircularProgressView *downloadingView;
@property (retain, nonatomic) UIImageView *downloadFailView;

- (void)setStickerSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateShowStatus;
- (id)createExtraIconView:(id)a0;
- (void)layoutDownloadStatusView:(id)a0;
- (void)setModel:(id)a0;
- (void)setDownloadProgress:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;

@end
