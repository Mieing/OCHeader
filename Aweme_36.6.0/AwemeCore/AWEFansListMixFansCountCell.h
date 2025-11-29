@class AWEFansListFansCountWrapperModel, AWEFansListMixFansCountView, UIView;

@interface AWEFansListMixFansCountCell : UICollectionViewCell

@property (retain, nonatomic) UIView *borderContainerView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEFansListMixFansCountView *douyinFansView;
@property (retain, nonatomic) AWEFansListMixFansCountView *otherPlatformFansView;
@property (retain, nonatomic) AWEFansListFansCountWrapperModel *wrapperModel;

- (void)configModel:(id)a0;
- (void)trackFansPanelWithAction:(id)a0;
- (void)trackFansPanelWithAction:(id)a0 extraParam:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
