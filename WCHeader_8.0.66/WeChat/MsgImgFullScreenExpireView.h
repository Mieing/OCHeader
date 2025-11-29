@class WXFullScreenGestureRecognizer, NSString, CMessageWrap, UIView, SightIconView, UILabel;
@protocol MsgImgFullScreenExpireViewDelegate;

@interface MsgImgFullScreenExpireView : UIView <FullScreenGestureDelegate>

@property (retain, nonatomic) CMessageWrap *msgWrap;
@property (retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestureRecognizer;
@property (nonatomic) BOOL draging;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) SightIconView *iconView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (weak, nonatomic) id<MsgImgFullScreenExpireViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 msgWrap:(id)a1;
- (void)layoutSubviews;
- (void)initUI;
- (void)layoutUI;
- (void)showUI;
- (void)hideUI;
- (void)onFullScreenSingleTap;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragEnd;
- (void)onFullScreenClose;
- (void)onFullScreenBackgroundColorAlphaChange:(double)a0;
- (void).cxx_destruct;

@end
