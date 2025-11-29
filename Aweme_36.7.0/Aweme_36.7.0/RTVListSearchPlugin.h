@class AWESearchBar, NSString, UIView;
@protocol RxInjector, RTVListSearchPluginDelegate;

@interface RTVListSearchPlugin : NSObject <RTVListSearchPluginInterface>

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) AWESearchBar *searchView;
@property (copy, nonatomic) NSString *preSearchedText;
@property (weak, nonatomic) id<RTVListSearchPluginDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadRTVAdapterClass;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__configComponents;
- (id)aAWEPadRTVAdapter;
- (void)listViewWillBeginDragging;
- (void)forceEndEditing;
- (id)currentContentText;
- (void)finishSearch;
- (void)enableSearching:(BOOL)a0;
- (void)pluginDidLayoutSubviews;
- (void)__searchViewDidBeginEdit:(id)a0;
- (void)__searchViewDidContentTextChange:(id)a0;
- (BOOL)isSearching;
- (void).cxx_destruct;
- (void)refresh;
- (void)becomeFirstResponder;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)loadContentView;
- (double)contentViewHeight;

@end
