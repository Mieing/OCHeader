@class NSString;

@interface AWEIMBorderTransitionLayout : NSObject <AWEIMSwipeTransitionLayout>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutView:(id)a0 atIndex:(long long)a1 withContext:(id)a2;
- (id)visibleWidthsForViewsWithContext:(id)a0;
- (void)continerView:(id)a0 didChangeVisibleWidthWithContext:(id)a1;

@end
