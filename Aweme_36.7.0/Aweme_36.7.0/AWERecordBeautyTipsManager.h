@class AWEBeautyTipsHintView;

@interface AWERecordBeautyTipsManager : NSObject

@property (retain, nonatomic) AWEBeautyTipsHintView *beautyHint;
@property (retain, nonatomic) AWEBeautyTipsHintView *zoomScaleHintView;

+ (id)shareInstance;

- (void)removeZoomScaleHintView;
- (void)showBeautyHintWithContainer:(id)a0 beautyName:(id)a1 categoryName:(id)a2;
- (void)removeBeautyHint;
- (void).cxx_destruct;

@end
