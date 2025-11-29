@class UIImageView;

@interface WCMomentsLivePhotoRegularGuideView : MMHalfScreenGuideView

@property (retain, nonatomic) UIImageView *guideImageView;
@property (nonatomic) int pickerScene;

- (id)init;
- (id)initWithAssetPickScene:(int)a0;
- (id)getGuideTitle;
- (id)getGuideDesc;
- (void)initSubViews;
- (void)configTitleLabelStyle;
- (void)configMessageLabelStyle;
- (id)createAcceptButton;
- (id)attributedTextForMessage:(id)a0 alignment:(long long)a1;
- (void)loadCustomizedTopView;
- (void)layoutCustomizedTopView;
- (void).cxx_destruct;

@end
