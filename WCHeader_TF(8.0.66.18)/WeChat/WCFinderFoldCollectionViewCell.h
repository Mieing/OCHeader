@class WCFinderFeedImageCDNView, WCFinderHeadImageView, WCFinderAuthInfoIconView, UIView, UILabel, MMUILabel;

@interface WCFinderFoldCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIView *headBackGroundView;
@property (retain, nonatomic) WCFinderHeadImageView *headerView;
@property (retain, nonatomic) WCFinderFeedImageCDNView *coverView;
@property (retain, nonatomic) UILabel *nickName;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) MMUILabel *descriLabel;

+ (id)cellID;
+ (double)cellHWithShowUIDetail:(BOOL)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)prepareForReuse;
- (void)updateWithFinderDataItem:(id)a0 showUIDetail:(BOOL)a1;
- (id)coverImageView;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
