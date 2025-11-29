@class NSString, NSDictionary, NSArray, AWESearchFilterManager;

@interface AWESearchFloatingHeaderTrackerContext : NSObject <AWESearchFloatingHeaderTrackerProtocol>

@property (copy, nonatomic) NSString *requestID;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSDictionary *logPassback;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL gsIsFromFeedBar;
@property (copy, nonatomic) NSString *gsSubWordsSource;
@property (copy, nonatomic) NSArray *gsWords;
@property (copy, nonatomic) NSString *subtabName;
@property (copy, nonatomic) NSString *searchType;
@property (copy, nonatomic) id /* block */ requestIDBlock;
@property (copy, nonatomic) id /* block */ searchIDBlock;
@property (copy, nonatomic) id /* block */ keywordBlock;
@property (copy, nonatomic) id /* block */ logPassbackBlock;
@property (copy, nonatomic) id /* block */ extraParamsBlock;
@property (copy, nonatomic) id /* block */ gsWordsBlock;
@property (copy, nonatomic) id /* block */ gsIsFromFeedBarBlock;
@property (copy, nonatomic) id /* block */ gsSubWordsSourceBlock;
@property (weak, nonatomic) AWESearchFilterManager *filterManagerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)gsWordWillDisplayAtIndex:(long long)a0;
- (void)gsWordDidSelectAtIndex:(long long)a0;
- (void)filterButtonDidClickedToShowMenu;
- (void)filterButtonDidClickedToDismissMenu;
- (void)filterClickBlankToDismissMenu;
- (void)filterDidSelectSectionAtSection:(long long)a0;
- (void)filterDidSelectItemAtSection:(long long)a0 itemIndex:(long long)a1;
- (void).cxx_destruct;

@end
