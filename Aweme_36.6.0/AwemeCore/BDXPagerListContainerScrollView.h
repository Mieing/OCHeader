@class NSString;

@interface BDXPagerListContainerScrollView : UIScrollView <UIGestureRecognizerDelegate>

@property (nonatomic, getter=isCategoryNestPagingEnabled) BOOL categoryNestPagingEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;

@end
