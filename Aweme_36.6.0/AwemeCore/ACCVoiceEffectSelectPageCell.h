@class UILabel, UIImageView, UIView;
@protocol ACCVoiceEffectItemProtocol;

@interface ACCVoiceEffectSelectPageCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *typeImageView;
@property (retain, nonatomic) UIView *selectedView;
@property (retain, nonatomic) UIImageView *loadingView;
@property (nonatomic) unsigned long long loadStatus;
@property (retain, nonatomic) id<ACCVoiceEffectItemProtocol> item;
@property (nonatomic) BOOL isCurrent;
@property (nonatomic) BOOL isCustomize;
@property (nonatomic) BOOL modernUI;

- (void)updateSelectStatus:(BOOL)a0;
- (void)p_startDownloadAnimation;
- (void)p_stopDownloadAnimation;
- (id)createRotationAnimation;
- (void)updateLoadingStatus:(unsigned long long)a0;
- (void)setupVoiceEffectItem:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityValue;
- (void)setupUI;

@end
