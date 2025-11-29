@class NSArray, WCFinderTabSwitchView, NSString;
@protocol WCFinderInteractiveHeaderDelegate;

@interface WCFinderInteractiveHeader : UIView <WCFinderTabSwitchViewDataSource, WCFinderTabSwitchViewDelegate>

@property (retain, nonatomic) WCFinderTabSwitchView *tabSwitchView;
@property (weak, nonatomic) id<WCFinderInteractiveHeaderDelegate> delegate;
@property (retain, nonatomic) NSArray *tabs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)sizeToFit;
- (long long)numberOfTabSwitchView:(id)a0;
- (id)tabSwitchView:(id)a0 customTabViewAtIndex:(long long)a1;
- (BOOL)onTabSwitchViewUserSelectIdx:(long long)a0 oldIdx:(long long)a1 animated:(BOOL)a2 context:(void *)a3 completion:(id /* block */)a4;
- (void).cxx_destruct;

@end
