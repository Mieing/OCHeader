@class NSString, NSArray, UIImageView, WCFinderHeadImageView, UIView, UILabel, UIImage;

@interface MMLiveStatisticsPosterView : UIView <MMLivePosterViewProviding>

@property (retain, nonatomic) UIView *roundedCornerContainerView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *backgroundBrandLogoImageView;
@property (retain, nonatomic) WCFinderHeadImageView *anchorAvatarView;
@property (retain, nonatomic) UILabel *anchorDisplayNameLabel;
@property (retain, nonatomic) UILabel *timeAndDescriptionLabel;
@property (retain, nonatomic) NSArray *itemViews;
@property (retain, nonatomic) UIView *brandContainerView;
@property (retain, nonatomic) UIImageView *brandLogoImageView;
@property (retain, nonatomic) UILabel *brandLabel;
@property (retain, nonatomic) UILabel *qrCodeHintLabel;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (readonly, nonatomic) UIImage *snapshotImage;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStatistics:(id)a0 anchorFinderContact:(id)a1 liveCreationUnixEpochTime:(unsigned int)a2 liveDescription:(id)a3;
- (void)layoutSubviews;
- (void)initializeComponentsWithStatistics:(id)a0 anchorContact:(id)a1 liveCreationUnixEpochTime:(unsigned int)a2 liveDescription:(id)a3;
- (void).cxx_destruct;

@end
