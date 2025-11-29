@class MMLiteAppView, OpenLiteAppInfo, FinderLiteAppParam;
@protocol WCFinderLiteAppFixedEmbdaViewDelegate;

@interface WCFinderLiteAppFixedEmbdaView : UIView

@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) MMLiteAppView *liteAppView;
@property (nonatomic) double originWidth;
@property (nonatomic) BOOL alreadyStartLiteApp;
@property (retain, nonatomic) OpenLiteAppInfo *liteAppInfo;
@property (retain, nonatomic) FinderLiteAppParam *params;
@property (weak, nonatomic) id<WCFinderLiteAppFixedEmbdaViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didMoveToWindow;
- (void)tryStartLiteApp;
- (void)onLiteAppContentSizeChagned:(unsigned int)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
