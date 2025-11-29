@class UIView, HTSVideoSpeedControl, AWESegmentedClipFooterPassThroughView, UIColor, CAShapeLayer, UIImageView, AWEVideoRangeSlider, CAGradientLayer, UICollectionView, UILabel, ACCAnimatedButton;

@interface AWERecordVideoClipFooterView : UIView

@property (retain, nonatomic) UIView *animationBgView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *singleClipLabel;
@property (nonatomic) BOOL isNeedSegment;
@property (nonatomic) BOOL clipEditEnabled;
@property (nonatomic) BOOL isInSingleSegmentEditing;
@property (retain, nonatomic) CAShapeLayer *cornerLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) ACCAnimatedButton *deleteButton;
@property (retain, nonatomic) ACCAnimatedButton *rotateButton;
@property (retain, nonatomic) ACCAnimatedButton *speedControlButton;
@property (retain, nonatomic) ACCAnimatedButton *reshootButton;
@property (retain, nonatomic) ACCAnimatedButton *aniCloseButton;
@property (retain, nonatomic) ACCAnimatedButton *aniOkButton;
@property (retain, nonatomic) HTSVideoSpeedControl *speedControl;
@property (retain, nonatomic) UIImageView *cursorView;
@property (nonatomic) struct CGSize { double width; double height; } normalItemSize;
@property (nonatomic) struct CGSize { double width; double height; } coverItemSize;
@property (retain, nonatomic) UICollectionView *framesCollectionView;
@property (retain, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionLeftMaskView;
@property (retain, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionRightMaskView;
@property (retain, nonatomic) UICollectionView *videosCollectionView;
@property (nonatomic) BOOL isSegmentedClipsOpen;
@property (retain, nonatomic) AWEVideoRangeSlider *videoRangeSlider;
@property (nonatomic) unsigned long long currentVideoIndex;
@property (retain, nonatomic) UIColor *panelColor;
@property (nonatomic) BOOL deleteButtonEnabled;

- (void)buildViews;
- (double)currentPanelHeight;
- (void)updateMaskView;
- (void)updateDeleteButton;
- (void)segmentedClipsEndAnimationWithCompletion:(id /* block */)a0;
- (BOOL)shouldContinueProceedure;
- (void)segmentedClipsStartAnimationWithCell:(id)a0;
- (BOOL)isInVideoSegmentsEditing;
- (double)framesCellHeight;
- (void)setupRightTopViewsFrameForSingleMode;
- (double)hintLabelHeight;
- (void)updateUIForXSCreenAdapt;
- (void)setupRightTopViewsFrameForSegment;
- (void)setupRightTopViewsFrameForTotal;
- (id)initWithNeedSegment:(BOOL)a0 clipEditEnabled:(BOOL)a1;
- (void)segmentedClipsEndAnimation;
- (void)configEditShowStatus:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;

@end
