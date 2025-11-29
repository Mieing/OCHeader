@class DUXBaseLabel, AWENewsAISmartTrackDetailViewModel, UIView;

@interface AWENewsAISmartFeedNavigationBarView : UIView

@property (retain, nonatomic) DUXBaseLabel *titleLabel;
@property (retain, nonatomic) UIView *subTitleView;
@property (retain, nonatomic) DUXBaseLabel *countLabel;
@property (retain, nonatomic) DUXBaseLabel *countInfoLabel;
@property (retain, nonatomic) AWENewsAISmartTrackDetailViewModel *viewModel;

- (void)updateTitleLabelAlpha:(double)a0;
- (void)updateCountLabelWithString:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;

@end
