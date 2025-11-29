@class UIButton, NSString, UIPanGestureRecognizer;

@interface AWEFullScreenOfflineTableViewCellMaskView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
