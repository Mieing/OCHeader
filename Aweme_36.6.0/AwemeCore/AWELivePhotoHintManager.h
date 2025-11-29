@class AWELivePhotoHintView;

@interface AWELivePhotoHintManager : NSObject

@property (retain, nonatomic) AWELivePhotoHintView *livePhotoHint;
@property (retain, nonatomic) AWELivePhotoHintView *zoomScaleHintView;

+ (id)shareInstance;

- (void)removeZoomScaleHintView;
- (void)showLivePhotoHintWithContainer:(id)a0 livePhotoName:(id)a1 adjustCenter:(BOOL)a2;
- (void)removeLivePhotoHint;
- (void).cxx_destruct;

@end
