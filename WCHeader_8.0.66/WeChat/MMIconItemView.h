@class UIView, MMWebImageView, UIImage, NSURL, MMIconItemViewConfig, NSString, MMUILabel, UIColor;
@protocol MMIconItemDelegate;

@interface MMIconItemView : UIView <MMWebImageViewDelegate, MMIconItemConfigDelegate>

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) MMIconItemViewConfig *config;
@property (retain, nonatomic) NSURL *iconImageURL;
@property (nonatomic) double textMaxWidth;
@property (weak, nonatomic) id<MMIconItemDelegate> delegate;
@property (retain, nonatomic) MMWebImageView *iconView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (nonatomic) BOOL changeIconColorOnAppearanceChange;
@property (retain, nonatomic) UIColor *iconColorLM;
@property (retain, nonatomic) UIColor *iconColorDM;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id /* block */)a0;
- (void)parseConfig;
- (void)initViews;
- (void)layoutViews;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)updateColorOnAppearanceChange;
- (void)onLoadImageOK:(id)a0;
- (id)webImageViewWithURL:(id)a0;
- (void)onConfigChanged;
- (void).cxx_destruct;

@end
