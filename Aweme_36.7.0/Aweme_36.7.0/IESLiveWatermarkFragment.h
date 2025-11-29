@class UIImageView;

@interface IESLiveWatermarkFragment : IESLiveRoomComponent

@property (retain, nonatomic) UIImageView *watermarkViewTop;
@property (retain, nonatomic) UIImageView *watermarkViewBottom;

+ (BOOL)componentShouldActive:(id)a0;

- (void)componentBindService;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)a0;
- (void)insertWatermarkViewWithOrientation:(long long)a0;
- (void).cxx_destruct;

@end
