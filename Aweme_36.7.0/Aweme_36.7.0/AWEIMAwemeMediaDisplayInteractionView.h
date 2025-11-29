@class UIStackView, AWEIMAwemeMediaDisplayInteractionViewConfig, UIView;
@protocol AWEIMAwemeMediaDisplayInteractionViewDelegate;

@interface AWEIMAwemeMediaDisplayInteractionView : UIView

@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UIView *topSubView;
@property (retain, nonatomic) UIView *bottomLeftContainer;
@property (retain, nonatomic) UIView *bottomLeftSubView;
@property (retain, nonatomic) UIStackView *bottomRightStackView;
@property (retain, nonatomic) AWEIMAwemeMediaDisplayInteractionViewConfig *config;
@property (weak, nonatomic) id<AWEIMAwemeMediaDisplayInteractionViewDelegate> delegate;

- (void)p_setupView;
- (void)p_setupQuoteBtn;
- (void)p_setupShareBtn;
- (void)p_setupDownloadBtn;
- (void)p_setupGroupAlbumdBtn;
- (void)p_setupShootSameBtn;
- (void)p_setupPublishBtn;
- (void)p_clickQuoteBtn;
- (void)p_addGaussianViewWithButton:(id)a0 width:(double)a1;
- (void)addSubviewToBottomRightView:(id)a0;
- (void)p_clickShareBtn;
- (void)p_clickDownloadBtn;
- (void)p_clickGroupAlbumBtn;
- (void)p_clickShootSameBtn;
- (void)addSubViewToBottomLeftView:(id)a0;
- (void)p_clickPublishBtn;
- (void)addSubViewToTopContainer:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
