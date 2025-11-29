@class NSString;
@protocol IESECPagerViewMainScrollViewGestureDelegate;

@interface IESECPagerViewMainScrollView : UIScrollView <UIGestureRecognizerDelegate>

@property (weak, nonatomic) id<IESECPagerViewMainScrollViewGestureDelegate> gestureDelegate;
@property (nonatomic) BOOL forwardHitTest;
@property (nonatomic) BOOL receiveAllEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
