@class UIImageView, DotLoadingView, UILabel;

@interface ACCIntelligentChapterProgressPointView : UIView

@property (retain, nonatomic) UIImageView *pointView;
@property (retain, nonatomic) DotLoadingView *pointLoadingView;
@property (retain, nonatomic) UILabel *pointLabel;

- (void)updateWithProgressState:(long long)a0 index:(long long)a1;
- (void).cxx_destruct;
- (id)initWithSize:(double)a0;
- (void)setupUI;

@end
