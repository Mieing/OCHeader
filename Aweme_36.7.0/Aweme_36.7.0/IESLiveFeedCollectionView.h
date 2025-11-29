@class NSString;
@protocol IESLiveWebViewService;

@interface IESLiveFeedCollectionView : UICollectionView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) id<IESLiveWebViewService> webViewService;
@property (nonatomic) BOOL enableNewInteraction;
@property (nonatomic) BOOL snapPageEnable;
@property (copy, nonatomic) id /* block */ receiveTouchEventBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)cacheSettingKey;
- (BOOL)p_shouldProhibitLandscapeSlideDown:(id)a0;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (id)init;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
