@class UILabel;

@interface AWEAwemeDetailNaviBarAdditionalAdsTitleElement : AWEAwemeDetailNaviBarBaseElement

@property (retain, nonatomic) UILabel *positionLabel;
@property (retain, nonatomic) UILabel *titleLabel;

- (void)updatePositionLabelText:(id)a0;
- (void)scrollViewDidScroll:(id)a0 currentIndex:(long long)a1 totalCount:(long long)a2;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;

@end
