@interface MuteBrandReport : NSObject

@property (nonatomic) unsigned long long action;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) long long totalUnreadCount;
@property (nonatomic) long long brandsCount;
@property (nonatomic) long long chooseBrandCount;
@property (nonatomic) BOOL enableNumberNoticeAcctCountFromSearch;

+ (void)reportOpenAction;
+ (void)reportCloseAction;
+ (void)reportEntryListAction:(long long)a0;
+ (void)reportExitListAction:(long long)a0 totalCount:(long long)a1 chooseBySearch:(BOOL)a2;
+ (long long)genTotalUnreadBrandCount;

- (void)report;

@end
