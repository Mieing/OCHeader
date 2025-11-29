@interface IESLivePublicScreenScrollView : UIScrollView

@property (nonatomic) BOOL enableTouchOpt;

- (BOOL)ieslive_isTouchInEmptyPlace:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
