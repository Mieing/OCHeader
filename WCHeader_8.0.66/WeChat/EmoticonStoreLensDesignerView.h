@class UIButton, NSString, UIImageView, PersonalDesigner, UIView, EmoticonLensInfo, UILabel;
@protocol EmoticonStoreLensDesignerViewDelegate;

@interface EmoticonStoreLensDesignerView : EmoticonCellLikeButton <EmoticonLensMgrExt>

@property (retain, nonatomic) NSString *lensId;
@property (retain, nonatomic) EmoticonLensInfo *lensInfo;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *lensNameLabel;
@property (retain, nonatomic) UILabel *designerNameLabel;
@property (retain, nonatomic) UIButton *followButton;
@property (weak, nonatomic) id<EmoticonStoreLensDesignerViewDelegate> delegate;
@property (readonly, nonatomic) PersonalDesigner *designer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)height;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)layoutSubviews;
- (void)setupLensId:(id)a0;
- (void)setupLensInfo:(id)a0;
- (void)onFollowButtonClick;
- (void)onEmoticonLensIconDownloadSuccess:(id)a0;
- (void).cxx_destruct;

@end
