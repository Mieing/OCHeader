@class UIView, AWESegmentedClipFooterPassThroughView, HTSVideoSpeedControl, CAShapeLayer, UIImageView, AWEVideoRangeSlider, CAGradientLayer, UICollectionView, UILabel, ACCAnimatedButton;

@interface AWEAIVideoClipFooterView : UIView

@property (retain, nonatomic) UILabel *hintLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } aniOldFrame;
@property (nonatomic) BOOL isNeedSegment;
@property (retain, nonatomic) CAShapeLayer *cornerLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIImageView *videoCoverImageView;
@property (retain, nonatomic) UIView *bottomSeparator;
@property (retain, nonatomic) ACCAnimatedButton *rotateButton;
@property (retain, nonatomic) ACCAnimatedButton *deleteButton;
@property (retain, nonatomic) ACCAnimatedButton *aniCloseButton;
@property (retain, nonatomic) ACCAnimatedButton *aniOkButton;
@property (retain, nonatomic) UIImageView *collectionViewSnapshot;
@property (nonatomic) struct CGSize { double width; double height; } normalItemSize;
@property (nonatomic) struct CGSize { double width; double height; } coverItemSize;
@property (retain, nonatomic) UICollectionView *framesCollectionView;
@property (retain, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionLeftMaskView;
@property (retain, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionRightMaskView;
@property (retain, nonatomic) AWEVideoRangeSlider *videoRangeSlider;
@property (retain, nonatomic) HTSVideoSpeedControl *speedControl;
@property (nonatomic) unsigned long long currentVideoIndex;
@property (nonatomic) BOOL openSpeedControlForNormal;
@property (nonatomic) BOOL openSpeedControlForSegment;
@property (nonatomic) double panelAnimationDuration;

- (void)buildViews;
- (void)showPanelWithAnimation:(id)a0 completion:(id /* block */)a1;
- (void)hidePanelWithAnimation;
- (void).cxx_destruct;
- (id)init;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
