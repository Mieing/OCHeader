@class IESLiveRecommendChorusInfoViewModel, IESLiveAnimatedImageView, NSMutableArray, UILabel;
@protocol IESLiveRecommendChorusInfoViewDelegate;

@interface IESLiveRecommendChorusInfoView : UIView

@property (retain, nonatomic) IESLiveAnimatedImageView *animView;
@property (retain, nonatomic) NSMutableArray *avatarViews;
@property (retain, nonatomic) UILabel *descLabel;
@property (weak, nonatomic) id<IESLiveRecommendChorusInfoViewDelegate> delegate;
@property (retain, nonatomic) IESLiveRecommendChorusInfoViewModel *viewModel;
@property (nonatomic) long long scaleRatio;

- (void)onClicked;
- (void)recommendChorusInfoViewWillShow;
- (void)updateWithRecommendChorusInfo:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
