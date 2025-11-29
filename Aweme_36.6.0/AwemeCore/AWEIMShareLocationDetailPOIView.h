@class AWEPOIIMShareModel, UIImageView, AWEButton, UILabel, UIView, AWEUILoadingView;

@interface AWEIMShareLocationDetailPOIView : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *buttonContainerView;
@property (retain, nonatomic) UIView *tagsView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UILabel *distanceLabel;
@property (retain, nonatomic) UIView *line;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEButton *detailButton;
@property (retain, nonatomic) AWEButton *navButton;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEPOIIMShareModel *shareModel;
@property (copy, nonatomic) id /* block */ naviAction;
@property (copy, nonatomic) id /* block */ detailAction;

- (void)endLoadingAnimation;
- (void)configLayoutWithModel:(id)a0;
- (void)configTagsViewWithModel:(id)a0;
- (id)createTagView;
- (void)onTapNavButton:(id)a0;
- (void)onTapDetailButton:(id)a0;
- (id)initWithPOIContent:(id)a0;
- (void)updateUIWithPOIModel:(id)a0;
- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (void)startLoadingAnimation;

@end
