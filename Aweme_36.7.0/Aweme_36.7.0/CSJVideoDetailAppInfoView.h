@class CSJMaterialMeta, UIImageView, UILabel, UIButton;
@protocol CSJVideoDetailAppInfoViewDelegate;

@interface CSJVideoDetailAppInfoView : UIView

@property (retain, nonatomic) UIImageView *adAppIconImageView;
@property (retain, nonatomic) UILabel *adTitleLabel;
@property (retain, nonatomic) UILabel *adDescriptionLabel;
@property (retain, nonatomic) UIButton *adDownloadButton;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (weak, nonatomic) id<CSJVideoDetailAppInfoViewDelegate> delegate;

- (id)c_xyDict_secWithTapView:(id)a0;
- (void)adAction:(id)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithMaterial:(id)a0;

@end
