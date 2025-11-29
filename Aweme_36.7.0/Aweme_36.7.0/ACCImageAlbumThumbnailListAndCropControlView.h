@class UIButton, UILabel, ACCImageAlbumThumbnailListAndCropControlViewConfig;

@interface ACCImageAlbumThumbnailListAndCropControlView : UIView

@property (retain, nonatomic) ACCImageAlbumThumbnailListAndCropControlViewConfig *config;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *sortButton;
@property (retain, nonatomic) UIButton *cropButton;
@property (retain, nonatomic) UILabel *sortTipLabel;
@property (copy, nonatomic) id /* block */ closeActionBlock;
@property (copy, nonatomic) id /* block */ confirmActionBlock;
@property (copy, nonatomic) id /* block */ switchActionBlock;

- (void)p_setupView;
- (void)handleCloseAction:(id)a0;
- (id)p_switchButtonNormalColor;
- (id)p_switchButtonSelectedColor;
- (void)handleSortAction:(id)a0;
- (void)handleCropAction:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;
- (void)handleConfirmAction:(id)a0;

@end
