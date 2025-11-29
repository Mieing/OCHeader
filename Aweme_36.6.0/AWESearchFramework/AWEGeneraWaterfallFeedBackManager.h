@interface AWEGeneraWaterfallFeedBackManager : NSObject

@property (nonatomic) BOOL showFeedBack;

+ (id)shareInstance;

- (void)showFeedBackWithURL:(id)a0 aweModel:(id)a1 Anchor:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 topVew:(id)a3 extraParams:(id)a4;

@end
