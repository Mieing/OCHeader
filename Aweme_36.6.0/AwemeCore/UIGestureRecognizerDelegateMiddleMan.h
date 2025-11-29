@class NSString;
@protocol UIGestureRecognizerDelegate;

@interface UIGestureRecognizerDelegateMiddleMan : NSObject <UIGestureRecognizerDelegate>

@property (readonly, weak, nonatomic) id<UIGestureRecognizerDelegate> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
