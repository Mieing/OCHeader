@class NSMutableDictionary, NSMutableArray;

@interface AWEIMLightInteractionStrategyManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *showTimeCacheDictionary;
@property (retain, nonatomic) NSMutableArray *clickStatusCacheArray;

+ (id)sharedInstance;

- (void)updateShowTimeCacheWithNoticeID:(id)a0;
- (void)recordLightInteractionClickWithNoticeID:(id)a0;
- (BOOL)shouldNoticeCellShowLightInteractionForNoticeID:(id)a0;
- (BOOL)shouldShowSendMessageForNoticeID:(id)a0;
- (BOOL)hasClickedLightInteractionForNoticeID:(id)a0;
- (BOOL)shouldFanCellShowLightInteractionForNoticeID:(id)a0;
- (void)removeOldestObjectFromCache:(id)a0;
- (void)saveShowTimeCache;
- (void)saveClickStatusCache;
- (BOOL)isFirstShowTimeOver12HoursForNoticeID:(id)a0 isNotice:(BOOL)a1;
- (BOOL)isFirstShowTimeOver24HoursForNoticeID:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)loadCache;

@end
