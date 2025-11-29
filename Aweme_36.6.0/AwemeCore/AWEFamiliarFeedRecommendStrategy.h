@class AWEUserRecommendBigCardDataSource, AFDFrequencyCountRule, NSNumber, AFDFrequencyExitRule;

@interface AWEFamiliarFeedRecommendStrategy : NSObject

@property (retain, nonatomic) AFDFrequencyCountRule *allShowCountRule;
@property (retain, nonatomic) NSNumber *leftAllShowCount;
@property (retain, nonatomic) NSNumber *leftSessionShowCount;
@property (retain, nonatomic) AFDFrequencyExitRule *obdShowTimeRule;
@property (retain, nonatomic) AWEUserRecommendBigCardDataSource *feedObdDataSource;
@property (retain, nonatomic) AWEUserRecommendBigCardDataSource *feedMateDataSource;
@property (retain, nonatomic) AWEUserRecommendBigCardDataSource *multiMateDataSource;

+ (long long)maxCountForMateCardPerDay;
+ (long long)durationHoursForObdCardAfterShow;

- (void)addLog:(id)a0;
- (BOOL)shouldFetchObdCardData;
- (BOOL)shouldFetchMateCardData;
- (BOOL)hasInsertedRecommendCard:(id)a0;
- (id)insertObdCardPositionWithContext:(id)a0;
- (id)insertMateCardPositionWithContext:(id)a0;
- (BOOL)enableInsertFamiliarFeedObdCardAB;
- (BOOL)enableInsertMateCardAB;
- (long long)positionIndexForObdCardInVideoList;
- (id)insertMultiMateCardPositionForEmptyPage:(BOOL)a0;
- (long long)positionIndexForMateCardInVideoList;
- (id)insertCardPriorityArray;
- (BOOL)enableInsertFamiliarFeedMateCardAB;
- (BOOL)multiCardCommonCondition;
- (BOOL)enableInsertFamiliarFeedListCardAB;
- (BOOL)shouldFamiliarFetchRecommendData;
- (id)insertCardPositionWithContext:(id)a0;
- (void)markRecommendCardHasShown:(long long)a0;
- (void)obdShowOnFamiliarFeed;
- (void).cxx_destruct;

@end
