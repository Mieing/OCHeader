@class NSString, UIImageView, WCFinderDetailTimeStringConfig, UILabel, UIView;

@interface WCFinderProfileOverviewCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) NSString *coverUrl;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (retain, nonatomic) WCFinderDetailTimeStringConfig *timeStringConfig;
@property (nonatomic) BOOL showSeparatorLine;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
