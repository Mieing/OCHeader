@interface MMFinderLiveNoticeCouponsGuideViewController : MMPageSheetBaseViewController

@property (copy, nonatomic) id /* block */ completion;

+ (void)showIfNeededForNotices:(id)a0 anchor:(id)a1 style:(unsigned long long)a2 whenKnowWillShow:(id /* block */)a3 completion:(id /* block */)a4;

- (id)initWithNotices:(id)a0 anchor:(id)a1;
- (void)viewWillLayoutSubviews;
- (void)pageSheetDidClose:(BOOL)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
