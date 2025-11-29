@class UITapGestureRecognizer, UIImageView, UILabel, AWEFeedSpeciesBottomViewModel, UIButton;
@protocol AWEFeedRecordSpeciesTipViewProtocol;

@interface AWEFeedRecordSpeciesTipView : UIView <AWEGrootBottomViewProtocol>

@property (retain, nonatomic) AWEFeedSpeciesBottomViewModel *viewModel;
@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *shotButton;
@property (retain, nonatomic) UITapGestureRecognizer *singleTap;
@property (weak, nonatomic) id<AWEFeedRecordSpeciesTipViewProtocol> delegate;
@property (nonatomic) BOOL shouldCancelPreviousTouch;

- (void)closeButtonClicked:(id)a0;
- (void)trackForShow;
- (void)configSubViews;
- (id)initWithEnterFrom:(id)a0 reactID:(id)a1 paramsDic:(id)a2;
- (BOOL)shouldShowSpeciesTipView;
- (void)configWithModel:(id)a0 indexPath:(id)a1 isClickToEnter:(BOOL)a2;
- (void)fullScreenLayout;
- (void)normalScreenLayout;
- (void)shotButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)cancel:(id)a0;

@end
