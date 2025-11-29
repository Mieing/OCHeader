@class NSMutableArray;

@interface IESECShopViewVisibilityManager : NSObject

@property (retain, nonatomic) NSMutableArray *viewInfos;

- (void)p_showViewHelper:(id)a0 idx:(long long)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })p_samePriority:(long long)a0;
- (void)p_hideViewHelper:(long long)a0;
- (void)registerView:(id)a0 withPriority:(unsigned long long)a1 show:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (void)removeView:(id)a0;
- (void)showView:(id)a0;
- (void)hideView:(id)a0;

@end
