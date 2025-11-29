@class NSString, AWEMinorAlbum, UIImageView, UIView, UILabel, NSDictionary;

@interface AWETeenGeneralAlbumInfoCell : UICollectionViewCell <AWETeenGeneralCellProtocol>

@property (retain, nonatomic) AWEMinorAlbum *albumModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *albumAvatar;
@property (retain, nonatomic) UIImageView *albumIcon;
@property (retain, nonatomic) UILabel *albumLabel;
@property (retain, nonatomic) UIView *dotView;
@property (retain, nonatomic) UILabel *albumTitleLabel;
@property (retain, nonatomic) UILabel *albumInfoLabel;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (copy, nonatomic) id /* block */ albumInfoClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })cellSize;

- (void)configWithModel:(id)a0 extra:(id)a1;
- (void)p_updateAlbumInfo;
- (void)p_albumPageEnter;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)reset;

@end
