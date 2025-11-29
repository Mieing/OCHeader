@class UIView, NSString, NSURL, AWEIMEmoticonModel, UIImageView, BDImageView, NSDictionary, MASConstraint, AWEIMEmoticonThemeModel, UILabel;
@protocol AWEIMEmoticonPreviewDelegateProtocol;

@interface AWEIMLittleEmoticonPreview : UIView <AWEIMEmoticonPreviewProtocol>

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) BDImageView *content;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowTipView;
@property (nonatomic) BOOL ignoreTheme;
@property (retain, nonatomic) MASConstraint *arrowLeadingConstraint;
@property (retain, nonatomic) AWEIMEmoticonThemeModel *theme;
@property (retain, nonatomic) AWEIMEmoticonModel *model;
@property (nonatomic) long long containerViewType;
@property (weak, nonatomic) id<AWEIMEmoticonPreviewDelegateProtocol> delegate;
@property (copy, nonatomic) NSDictionary *bizTrackInfos;
@property (copy, nonatomic) NSDictionary *convTrackInfos;
@property (retain, nonatomic) NSURL *contentRemoteUrl;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) unsigned long long previewScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContainerViewType:(long long)a0 ignoreTheme:(BOOL)a1;
- (struct CGSize { double x0; double x1; })sizeThatFitsContent:(id)a0;
- (void)setArrowTipAnchorPointAtTop:(struct CGPoint { double x0; double x1; })a0;
- (void)setArrowTipAnchorPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)__setupUIs:(BOOL)a0;
- (id)__currentDisplayNameWithModel:(id)a0;
- (id)initWithContainerViewType:(long long)a0;
- (void)setPlaceHolderBGImage:(id)a0;
- (id)__previewBackgroundColor;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
