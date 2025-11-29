@class UIImageView, UILabel;

@interface ACCImageAlbumThumbnailListDeleteView : UIView <ACCSequencePreViewDeleteViewProtocol>

@property (retain, nonatomic) UIImageView *trashIcon;
@property (retain, nonatomic) UILabel *tipLabel;
@property (nonatomic) BOOL allowDelete;

- (void)p_setupViews;
- (void)updateDeleteStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateUI:(BOOL)a0;

@end
