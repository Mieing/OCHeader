@class NSString, NSArray, NSData, NSMutableArray;
@protocol WCFinderProfileMJTempPageModelDelegate;

@interface WCFinderProfileMJTempPageModel : WCFinderStreamProfilePageModel

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSMutableArray *mutContentVMS;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL isLoading;
@property (retain, nonatomic) NSData *lastBuff;
@property (nonatomic) unsigned long long refreshTime;
@property (readonly, nonatomic) NSArray *contentVMS;
@property (weak, nonatomic) id<WCFinderProfileMJTempPageModelDelegate> delegate;

+ (BOOL)shouldDisplay:(id)a0;
+ (BOOL)allowLimitMode;
+ (id)overviewSectionTypes;
+ (int)tabId;

- (void)_updateOverviewSection:(long long)a0 templates:(id)a1;
- (void)requestPageData;
- (id)init;
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)shouldDisplayTab;
- (void)requestFirstPage;
- (void)requestNextPage;
- (void)_requestData:(BOOL)a0;
- (id)reportParamsBlock;
- (void).cxx_destruct;

@end
