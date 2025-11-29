@class NSString, UIImageView, IESLiveInnerFeedTransferRecommendGuideConfigManager, UILabel, UIView, IESLiveInnerFeedContext;

@interface IESLiveInnerFeedTransferFooterView : UICollectionReusableView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabelBottom;
@property (retain, nonatomic) UILabel *titleLabelTop;
@property (retain, nonatomic) NSString *drawType;
@property (retain, nonatomic) IESLiveInnerFeedTransferRecommendGuideConfigManager *configManager;
@property (weak, nonatomic) IESLiveInnerFeedContext *context;
@property (nonatomic) BOOL hasReportedThisTime;
@property (retain, nonatomic) UIView *containerView;

- (void)layoutWithStyle:(long long)a0;
- (void)trackGuideEvent:(long long)a0;
- (void)transformAccordingToOffset:(double)a0;
- (void)changeElementStatus:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
