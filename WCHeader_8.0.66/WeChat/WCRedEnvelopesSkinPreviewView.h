@class NSString, WCPayWebImageView;

@interface WCRedEnvelopesSkinPreviewView : UIView

@property (retain, nonatomic) WCPayWebImageView *skinImageView;
@property (retain, nonatomic) NSString *imageURL;
@property (nonatomic) BOOL isWidgetSkin;
@property (nonatomic) BOOL isRecommendMode;

- (id)initWithImageURL:(id)a0 isWidgetSkin:(BOOL)a1 isRecommendMode:(BOOL)a2;
- (void)setupViews;
- (void).cxx_destruct;

@end
