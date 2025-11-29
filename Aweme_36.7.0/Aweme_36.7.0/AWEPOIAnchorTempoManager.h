@class UIView, _TtC8TempoiOS11TempoEngine;
@protocol AWEPOIAnchorTempoManagerDelegate;

@interface AWEPOIAnchorTempoManager : NSObject

@property (retain, nonatomic) _TtC8TempoiOS11TempoEngine *engine;
@property (retain, nonatomic) UIView *oldRootView;
@property (weak, nonatomic) id<AWEPOIAnchorTempoManagerDelegate> delegate;

- (void)loadTempoTemplate:(id)a0 uniqueID:(id)a1 data:(id)a2 constrainedSize:(struct CGSize { double x0; double x1; })a3 completion:(id /* block */)a4;
- (void).cxx_destruct;
- (id)init;
- (void)setupEngine;

@end
