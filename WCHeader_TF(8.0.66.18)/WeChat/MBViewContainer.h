@class MBViewBase;

@interface MBViewContainer : UIView

@property (retain, nonatomic) MBViewBase *renderView;

- (id)renderLayer;
- (void)setupRenderView:(unsigned char)a0;
- (void).cxx_destruct;

@end
