@class UIImageView, ACCPicTemplateModel, NSString;

@interface AWECoverPicTemplatePanelThumbnailViewCell : UICollectionViewCell <ACCPicTemplateDownloadObserverProtocol>

@property (retain, nonatomic) UIImageView *templateImageView;
@property (retain, nonatomic) ACCPicTemplateModel *template;
@property (nonatomic) BOOL isSelected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithTemplateModel:(id)a0;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
