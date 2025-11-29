@class UIColor, UIView, WCFinderJumpInfo, NSString, UIImageView, FinderJumpInfo_CarouselCardStyle, UILabel, NSIndexPath;
@protocol WCFinderAdCarouselCollectionViewCellDelegate;

@interface WCFinderAdCarouselCollectionViewCell : UICollectionViewCell <WCFinderJumpInfoViewProtocol>

@property (retain, nonatomic) UIView *bkgColorView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *blackMaskView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIView *themeColorGradientView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *actionLabel;
@property (retain, nonatomic) UIImageView *rightArrowView;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (nonatomic) int showPosition;
@property (retain, nonatomic) FinderJumpInfo_CarouselCardStyle *cardStyle;
@property (nonatomic) long long cardPos;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (retain, nonatomic) UIColor *customThemeColor;
@property (weak, nonatomic) id<WCFinderAdCarouselCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)a0;
- (void)updateWithJumpInfo:(id)a0 showPosition:(int)a1;
- (void)updateWithJumpInfo:(id)a0 style:(id)a1;
- (void)updateThemeColor:(id)a0;
- (long long)carouselTimeInMs;
- (id)genThemeColorGradientView;
- (id)genBlackMaskView;
- (void)layoutUI;
- (id)bkgColor;
- (void).cxx_destruct;

@end
