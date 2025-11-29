@class UIView, AWESegmentedClipFooterPassThroughView, HTSVideoSpeedControl, UIColor, NSString, CAShapeLayer, UIImageView, AWEVideoRangeSlider, CAGradientLayer, UICollectionView, UILabel, ACCAnimatedButton;
@protocol AWESegmentedClipFooterViewDelegate;

@interface AWESegmentedClipFooterView : UIImageView <AWEVideoClipFooterView>

@property (retain, nonatomic) UIView *animationBgView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *singleClipLabel;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } aniOldFrame;
@property (nonatomic) BOOL isNeedSegment;
@property (nonatomic) BOOL isInSingleSegmentEditing;
@property (retain, nonatomic) CAShapeLayer *cornerLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (weak, nonatomic) id<AWESegmentedClipFooterViewDelegate> delegate;
@property (retain, nonatomic) ACCAnimatedButton *rotateButton;
@property (retain, nonatomic) ACCAnimatedButton *deleteButton;
@property (retain, nonatomic) ACCAnimatedButton *speedControlButton;
@property (retain, nonatomic) ACCAnimatedButton *aniCloseButton;
@property (retain, nonatomic) ACCAnimatedButton *aniOkButton;
@property (retain, nonatomic) UIImageView *cursorView;
@property (nonatomic) struct CGSize { double width; double height; } normalItemSize;
@property (nonatomic) struct CGSize { double width; double height; } coverItemSize;
@property (retain, nonatomic) UICollectionView *framesCollectionView;
@property (retain, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionLeftMaskView;
@property (retain, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionRightMaskView;
@property (retain, nonatomic) UICollectionView *videosCollectionView;
@property (nonatomic) BOOL isSegmentedClipsOpen;
@property (retain, nonatomic) AWEVideoRangeSlider *videoRangeSlider;
@property (retain, nonatomic) HTSVideoSpeedControl *speedControl;
@property (nonatomic) unsigned long long currentVideoIndex;
@property (retain, nonatomic) UIColor *panelColor;
@property (nonatomic) BOOL openSpeedControlForNormal;
@property (nonatomic) BOOL openSpeedControlForSegment;
@property (nonatomic) BOOL enableVideoSegementsEdit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buildViews;
- (double)currentPanelHeight;
- (void)segmentedClipsEndAnimationWithCompletion:(id /* block */)a0;
- (BOOL)shouldContinueProceedure;
- (void)segmentedClipsStartAnimationWithCell:(id)a0;
- (BOOL)isInVideoSegmentsEditing;
- (void)footerViewWillAppear;
- (void)footerViewDidAppear;
- (void)footerViewWillDisappear;
- (void)footerViewDidDisappear;
- (void)setSpeedControlHidden:(BOOL)a0;
- (void)setupRightTopViewsFrameForSingleMode;
- (double)hintLabelHeight;
- (void)updateUIForXSCreenAdapt;
- (void)setupRightTopViewsFrameForSegment;
- (void)setupRightTopViewsFrameForTotal;
- (void)segmentedClipsEndAnimation;
- (double)frameCellHeight;
- (id)initWithNeedSegment:(BOOL)a0;
- (void)updateUIForSingleVideo;
- (void).cxx_destruct;
- (id)containerView;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
