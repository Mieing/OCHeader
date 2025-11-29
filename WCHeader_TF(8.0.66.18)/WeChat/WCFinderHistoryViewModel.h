@class NSArray, WCFinderHistoryPageModel, NSString;
@protocol WCFinderHistoryViewModelDelegate;

@interface WCFinderHistoryViewModel : NSObject <WCFinderHistorySwitchExtension>

@property (nonatomic) long long historyRecardDays;
@property (nonatomic) BOOL showSearchIcon;
@property (weak, nonatomic) id<WCFinderHistoryViewModelDelegate> delegate;
@property (retain, nonatomic) NSArray *tabs;
@property (retain, nonatomic) WCFinderHistoryPageModel *displayTab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)mapSessionBlock;

- (id)init;
- (void)dealloc;
- (void)_requestTabData:(id)a0;
- (void)makeTabs;
- (BOOL)hasContent;
- (int)scene;
- (void)updateHistoryRecardDays:(long long)a0;
- (void)updateNoMoreTips;
- (void)clear;
- (void)onFinderHistoryDeleteItems:(id)a0;
- (void).cxx_destruct;

@end
