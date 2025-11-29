@class NSString, BDXPageBaseView;
@protocol BDXPageItemViewProTagDelegate;

@interface BDXLynxPageViewItemPro : LynxUI <BDXPagerViewListViewDelegate>

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) id /* block */ scrollCallback;
@property (weak, nonatomic) BDXPageBaseView *nestedPageView;
@property (weak, nonatomic) id<BDXPageItemViewProTagDelegate> tagDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)lynxLazyLoad;
+ (id)__lynx_prop_config__1191;

- (void)layoutDidFinished;
- (void)tag:(id)a0 requestReset:(BOOL)a1;
- (id)listScrollView;
- (void)listWillMoveToWindow;
- (void)setupScrollView:(id)a0;
- (void)traverseAllSubviews:(id)a0;
- (void)listViewDidScrollCallback:(id /* block */)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (id)listView;
- (void)insertChild:(id)a0 atIndex:(long long)a1;
- (id)createView;

@end
