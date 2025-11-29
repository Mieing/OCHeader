@class IESLivePrivilegeDanmakuSettingViewModel, UICollectionView, UILabel, UICollectionViewFlowLayout;

@interface IESLivePrivilegeDanmakuSettingView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *collectionLayout;
@property (nonatomic) BOOL isAdmin;
@property (nonatomic) long long shadowType;
@property (retain, nonatomic) IESLivePrivilegeDanmakuSettingViewModel *viewModel;
@property (copy, nonatomic) id /* block */ contentDidUpdated;

- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
