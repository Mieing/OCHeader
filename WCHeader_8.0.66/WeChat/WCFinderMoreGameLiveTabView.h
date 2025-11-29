@class UIColor, MMLiveColorfulLabel, NSString, NSArray, UIView, MMWebImageView;
@protocol WCFinderTabViewDelegate;

@interface WCFinderMoreGameLiveTabView : UIView <MMWebImageViewDelegate, WCFinderTabViewProtocol>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) MMLiveColorfulLabel *titleLabel;
@property (copy, nonatomic) NSString *bindPath;
@property (retain, nonatomic) UIView *redDotView;
@property (nonatomic) double fontSize;
@property (nonatomic) unsigned int bindTabId;
@property (retain, nonatomic) MMWebImageView *iconImage;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSArray *textColors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WCFinderTabViewDelegate> delegate;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)setTitleText:(id)a0;
- (BOOL)isRedDotViewHidden;
- (BOOL)isIconImageHidden;
- (void)sizeToFit;
- (void)layoutSubviews;
- (void)layoutUIMargin;
- (void)updateForState:(unsigned long long)a0;
- (void)setBindRedDotPath:(id)a0;
- (void)finderRedDotDataChangedWithPathKey:(id)a0;
- (void)processRedDotView;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
