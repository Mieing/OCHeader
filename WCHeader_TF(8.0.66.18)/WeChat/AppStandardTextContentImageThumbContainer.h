@class MMGradientView, MMUILabel, UIView, AppStandardContentExternalLoadImageView, AppStandardTextContentImageThumbConfig;
@protocol AppStandardContentExternalLoadImageView;

@interface AppStandardTextContentImageThumbContainer : UIView

@property (retain, nonatomic) AppStandardTextContentImageThumbConfig *config;
@property (retain, nonatomic) AppStandardContentExternalLoadImageView *imageContainer;
@property (retain, nonatomic) UIView<AppStandardContentExternalLoadImageView> *imageView;
@property (retain, nonatomic) MMGradientView *metadataMaskView;
@property (retain, nonatomic) MMUILabel *descLabel;

- (id)initWithConfig:(id)a0;
- (void)initSubviews;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
