@class NSArray, UIImageView, NSString, UIView, AWESlidingViewController;
@protocol AWEPOIUGCRateTabsNavigationBarDelegate;

@interface AWEPOIUGCRateTabsNavigationBar : DUXNavigationBar <AWESlidingTabbarProtocol>

@property (retain, nonatomic) UIView *tabsContanierView;
@property (retain, nonatomic) NSArray *tabLabels;
@property (retain, nonatomic) UIView *selectedLine;
@property (retain, nonatomic) UIImageView *rightIconView;
@property (retain, nonatomic) NSArray *tabs;
@property (copy, nonatomic) NSString *rightIconRedirectUrl;
@property (weak, nonatomic) id<AWEPOIUGCRateTabsNavigationBarDelegate> delegate;
@property (weak, nonatomic) AWESlidingViewController *slidingViewController;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateSelectedLineFrame;
- (void)setSelectedIndex:(long long)a0 animated:(BOOL)a1 tapped:(BOOL)a2;
- (void)slidingControllerDidScroll:(id)a0 isFigureDragging:(BOOL)a1;
- (void)reloadWithTabs:(id)a0 selectedIndex:(long long)a1 traceSessionID:(id)a2;
- (id)trackingParamsForRightIcon;
- (void)updateWithLabel:(id)a0 isSelected:(BOOL)a1;
- (void)didClickTab:(id)a0;
- (void)updateRightIconWithSessionID:(id)a0;
- (void)didClickRightIcon;
- (void)updateTabLabelSelectedStauts;
- (void).cxx_destruct;
- (id)init;
- (double)fontSize;

@end
