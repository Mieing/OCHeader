@class UIColor, NSString, WCFinderNetPagView, MMWebImageView, WCFinderJumpInfo;
@protocol WCFinderJumpInfoIconViewDelegate;

@interface WCFinderJumpInfoIconView : UIView <MMWebImageViewDelegate, PAGViewListener>

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) WCFinderNetPagView *iconPagView;
@property (retain, nonatomic) WCFinderJumpInfo *jumpInfo;
@property (nonatomic) BOOL enableClick;
@property (retain, nonatomic) UIColor *localEnableColor;
@property (retain, nonatomic) UIColor *disableIconColor;
@property (nonatomic) BOOL videoPauseState;
@property (weak, nonatomic) id<WCFinderJumpInfoIconViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setAlpha:(double)a0;
- (BOOL)isShow;
- (void)onLoadImageFail:(id)a0 extraInfo:(id)a1;
- (void)showIconView:(id)a0;
- (BOOL)enableShowPagIcon;
- (void)updateWithJumpInfo:(id)a0 enableClick:(BOOL)a1 localEnableColor:(id)a2 disableIconColor:(id)a3;
- (id)getLocalDefaultPagResPath:(int)a0;
- (id)localIconFormJumpInfo:(id)a0 iconSize:(struct CGSize { double x0; double x1; })a1 iconColor:(id)a2 enable:(BOOL)a3;
- (void)updateWithLinkStyle:(id)a0;
- (void)updateWithIconUrl:(id)a0 iconType:(int)a1 pagIconUrl:(id)a2 defaultImage:(id)a3 businessType:(int)a4;
- (void)setDefaultImage:(id)a0;
- (void)refresh;
- (void).cxx_destruct;

@end
