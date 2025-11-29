@class UILabel, UIImageView;
@protocol AWEEnterpriseToolsBubbleModelProtocol;

@interface AWECompanyToolCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *tagIconView;
@property (retain, nonatomic) id<AWEEnterpriseToolsBubbleModelProtocol> bubbleModel;
@property (nonatomic) BOOL isSearchMoreBubble;

- (void)p_updateTitleConstraints;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
