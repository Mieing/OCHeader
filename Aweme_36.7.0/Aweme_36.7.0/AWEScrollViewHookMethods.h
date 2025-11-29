@class NSString;

@interface AWEScrollViewHookMethods : NSObject <UIScrollViewDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)hookScrollViewDelegate:(id)a0;

- (void)perf_isa_scrollViewWillBeginDragging:(id)a0;
- (void)perf_isa_scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)perf_isa_scrollViewDidEndDecelerating:(id)a0;

@end
