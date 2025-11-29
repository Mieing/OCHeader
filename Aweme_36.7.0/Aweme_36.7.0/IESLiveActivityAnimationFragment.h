@class IESLiveFloatAssetController, IESLiveTopAssetController, NSString;

@interface IESLiveActivityAnimationFragment : IESLiveRoomComponent <IESLiveActivityAnimationRouter>

@property (retain, nonatomic) IESLiveTopAssetController *topAssetController;
@property (retain, nonatomic) IESLiveFloatAssetController *floatAssetController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)a0;
+ (BOOL)isMixed;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)componentOrientationChanged:(long long)a0;
- (void)disableRareGiftPlay:(BOOL)a0;
- (void).cxx_destruct;

@end
