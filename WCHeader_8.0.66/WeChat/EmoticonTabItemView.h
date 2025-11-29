@class MMBadgeView, NSString, MMWebImageView;

@interface EmoticonTabItemView : MMUIView <MMWebImageViewDelegate>

@property (retain, nonatomic) MMWebImageView *m_webImageView;
@property (retain, nonatomic) MMBadgeView *badgeView;
@property (nonatomic) BOOL needConvertToGrayImage;
@property (nonatomic) BOOL hasRedPoint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)setNormalImageUrl:(id)a0;
- (void)setNormalImage:(id)a0;
- (void)setAlwaysTemplateRenderingMode:(BOOL)a0;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
