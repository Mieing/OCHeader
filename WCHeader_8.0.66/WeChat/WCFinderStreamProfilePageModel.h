@class NSString, FinderUserPageTab, WCFinderStreamProfileHeadData;
@protocol WCFinderStreamProfilePageModelTabDelegate;

@interface WCFinderStreamProfilePageModel : NSObject <WCFinderStreamProfileSubViewModelProtocol, WCFinderStreamProfilePlugin>

@property (weak, nonatomic) id<WCFinderStreamProfilePageModelTabDelegate> tabDelegate;
@property (retain, nonatomic) FinderUserPageTab *tabdef;
@property (retain, nonatomic) WCFinderStreamProfileHeadData *headData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldDisplay:(id)a0;
+ (BOOL)allowLimitMode;
+ (BOOL)pageIsRequired;
+ (int)tabId;
+ (id)overviewSectionTypes;

- (id)init;
- (void)prepare;
- (id)displayName;
- (BOOL)shouldDisplayTab;
- (id)viewPageClassName;
- (id)overviewSectionTypes;
- (void)doLoadCache;
- (void)requestPageData;
- (void)notifyPageDisplay:(BOOL)a0;
- (void)notifyOverviewSecElementCountChanged:(long long)a0 newCount:(long long)a1;
- (void)notifyOverviewSectionUpdate:(id)a0;
- (id)reportParamsBlock;
- (void)reportClickTab:(int)a0;
- (void)reportExposeTab:(int)a0;
- (id)commonTabReportData;
- (void)onFirstCgiFinish:(BOOL)a0 cgiProfile:(id)a1;
- (void)onContactLoaded:(id /* block */)a0;
- (void)onOtherPageLoaded:(Class)a0 finish:(id /* block */)a1;
- (void)notifyTabDisplayChanged:(id)a0;
- (void)updateOverviewSection:(long long)a0 necessary:(BOOL)a1 block:(id /* block */)a2;
- (id)fetchOverviewSection:(long long)a0;
- (void).cxx_destruct;

@end
