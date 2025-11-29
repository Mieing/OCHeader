@class UILabel, UIImageView;
@protocol AWEIMHighlyProspectiveRecommendHeaderFooterViewDelegate;

@interface AWEIMHighlyProspectiveRecommendHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *introductionImageView;
@property (retain, nonatomic) UIImageView *closeImageView;
@property (weak, nonatomic) id<AWEIMHighlyProspectiveRecommendHeaderFooterViewDelegate> delegate;

- (void)__setupUI;
- (void)__setupLayout;
- (void)updateLayoutWithProvider:(id)a0;
- (void)__handleIntroductionImageViewClicked;
- (void)__handleCloseImageViewClicked;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;

@end
