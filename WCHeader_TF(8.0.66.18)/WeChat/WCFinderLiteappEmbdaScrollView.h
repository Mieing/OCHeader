@class MMLiteAppView, OpenLiteAppInfo, NSString;

@interface WCFinderLiteappEmbdaScrollView : UIScrollView <UIGestureRecognizerDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) MMLiteAppView *liteAppView;
@property (nonatomic) BOOL alreadyStart;
@property (retain, nonatomic) OpenLiteAppInfo *liteAppInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)tryStartLiteApp;
- (void)onLiteAppContentSizeChagned:(unsigned int)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewDidScroll:(id)a0;
- (void).cxx_destruct;

@end
