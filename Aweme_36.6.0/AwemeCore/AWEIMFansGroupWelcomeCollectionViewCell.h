@class NSString, UIImageView, AWEIMFansGroupWelcomeModel, UILabel, UIView;
@protocol AWEIMBaseCollectionViewEventProtocol, AWEIMBaseCollectionViewViewModelProtocol;

@interface AWEIMFansGroupWelcomeCollectionViewCell : UICollectionViewCell <AWEIMBaseCollectionViewCellProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIImageView *selectedImageView;
@property (retain, nonatomic) UIView *line;
@property (weak, nonatomic) AWEIMFansGroupWelcomeModel *model;
@property (retain, nonatomic) id<AWEIMBaseCollectionViewViewModelProtocol> viewModel;
@property (weak, nonatomic) id<AWEIMBaseCollectionViewEventProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)cellReuseIdentifier;

- (void)addKVO;
- (void)showSelectedImage:(BOOL)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setupUI;

@end
