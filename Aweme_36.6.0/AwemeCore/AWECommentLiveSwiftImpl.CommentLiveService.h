@interface AWECommentLiveSwiftImpl.CommentLiveService : NSObject <AWECommentLiveService>

- (BOOL)commentAuthorLiveHeadEnable;
- (BOOL)liveheadOpacityControlEnable;
- (BOOL)shouldShowLiveHeadWithModel:(id)a0;
- (id)createCommentLiveHead:(struct CGSize { double x0; double x1; })a0 lineWidth:(double)a1;
- (void)startLiveHeadAnimation:(id)a0 markLayerColors:(id)a1 syncStartTime:(double)a2;
- (void)stopLiveHeadAnimation:(id)a0;
- (BOOL)isLiveheadPlaying:(id)a0;
- (id)liveHeadGradientColorsWith:(id)a0;
- (void)enterLiveWithAweme:(id)a0 extra:(id)a1 completion:(id /* block */)a2;
- (void)trackLiveShowWithAweme:(id)a0 extra:(id)a1;
- (id)init;

@end
