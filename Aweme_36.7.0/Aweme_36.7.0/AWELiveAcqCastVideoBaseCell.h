@class AWEAwemeModel, UIView, NSString, UIImageView, AWEGradientView, AWEDetailCellTagLabel, AWELiveAcqGradientBackgroundLabelView, UILabel;
@protocol AFDUserWorkStoryTagViewProtocol;

@interface AWELiveAcqCastVideoBaseCell : UICollectionViewCell <AWEUserWorkCollectionViewComponentCellProtocol>

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UIImageView *stateImageView;
@property (retain, nonatomic) UILabel *prohibitedContentLabel;
@property (retain, nonatomic) UIImageView *privacyIconImageView;
@property (retain, nonatomic) AWEDetailCellTagLabel *topLabel;
@property (retain, nonatomic) UILabel *topInfoLabel;
@property (retain, nonatomic) UILabel *dynamicLabel;
@property (retain, nonatomic) UIView *dynamicLabelContainer;
@property (retain, nonatomic) AWEGradientView *dynamicLabelContainerGradientView;
@property (retain, nonatomic) UIImageView *mediaTypeView;
@property (retain, nonatomic) UIView<AFDUserWorkStoryTagViewProtocol> *storyTagView;
@property (retain, nonatomic) UIImageView *hotSpotIconImageView;
@property (retain, nonatomic) UIImageView *atlasIconImageView;
@property (retain, nonatomic) AWELiveAcqGradientBackgroundLabelView *gradientView;
@property (nonatomic) long long type;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL isMine;
@property (nonatomic) BOOL usingDynamicCover;
@property (nonatomic) BOOL disableDynamicCover;
@property (retain, nonatomic) UIView *prohibitedContentLayer;
@property (retain, nonatomic) AWEGradientView *maskLayer;
@property (retain, nonatomic) UILabel *starAtlasTagLabel;
@property (nonatomic) double imageRequestSentinel;
@property (nonatomic) struct CGSize { double width; double height; } preferImageViewSize;
@property (retain, nonatomic) UIImageView *imageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;

- (void)configWithType:(long long)a0;
- (void)__layoutUI;
- (void)configWithModel:(id)a0 isMine:(BOOL)a1 disableDynamicCover:(BOOL)a2;
- (void)updateCoverWithCompletion:(id /* block */)a0;
- (void)updateIconAndCount;
- (void)updateOtherSubviews;
- (BOOL)shouldUseDynamicCover:(id)a0;
- (void)hideIconShowLayer;
- (void)hideIconHideLayer;
- (id)__accessibilityLabelwithTitle:(id)a0 isMine:(BOOL)a1 count:(BOOL)a2;
- (BOOL)shouldShowStoryTag;
- (void)clearAnimatedImageBuffer;
- (void)markCurrentVideo:(BOOL)a0;
- (void)isCellChoose:(id)a0 withManageMode:(BOOL)a1;
- (void)configWithModel:(id)a0 isMine:(BOOL)a1;
- (void)processSRImage:(id)a0;
- (void)showDateView:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_setupUI;

@end
