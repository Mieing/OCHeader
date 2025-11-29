@class AWEUniversalCleanHeaderView, UIImageView, AWEUITextLoadingView;

@interface AWEDiskUniversalCleanView : AWEDiskCleanBaseView

@property (retain, nonatomic) AWEUniversalCleanHeaderView *internalHeaderView;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) AWEUITextLoadingView *loading;
@property (nonatomic) float cleneSize;
@property (nonatomic) long long progress;

- (void)addCustomView;
- (void)setCleanModels:(id)a0;
- (void)updatePercentDesc:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
