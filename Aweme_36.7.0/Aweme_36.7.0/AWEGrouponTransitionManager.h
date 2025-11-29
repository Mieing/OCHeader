@class NSString, AWEGrouponHalfClosedAction;

@interface AWEGrouponTransitionManager : NSObject <AWELiveRoomMessage, AWEGrouponZoomOuterContextProvider>

@property (retain, nonatomic) AWEGrouponHalfClosedAction *halfClosedAction;
@property (copy, nonatomic) NSString *currentLiveRoomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isOpenLiveRoom:(id)a0;
+ (BOOL)isOpenPOI:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)audienceQuitAllRoomWithSlideVC:(id)a0 player:(id)a1 context:(id)a2;
- (void)enableLiveRoomTransitionExitWithParams:(id)a0 originSchema:(id)a1;
- (void)enablePOITransitionExitWithParams:(id)a0 originSchema:(id)a1;
- (id)zoomTransitionStartViewWithContextParams:(id)a0;
- (id)halfCloseAnimationConfig;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
