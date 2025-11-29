@class NSDictionary, NSMutableDictionary;

@interface IESECListCardShowTimeTracker : NSObject

@property (retain, nonatomic) NSMutableDictionary *cardReportDict;
@property (nonatomic) BOOL isViewAppear;
@property (nonatomic) BOOL isAppActive;
@property (nonatomic) long long exposureNum;
@property (nonatomic) double exposureStartTime;
@property (nonatomic) long long exposureMaxIndex;
@property (nonatomic) long long exposureCurrentIndex;
@property (retain, nonatomic) NSMutableDictionary *continuouslySameCardDict;
@property (copy, nonatomic) NSDictionary *businessTypeDict;
@property (nonatomic) BOOL checkSameCardTag;
@property (nonatomic) long long sameProductCurrentIndex;
@property (nonatomic) long long continueLiveCurrentIndex;
@property (nonatomic) long long sameLiveCurrentIndex;

- (void)recordMallGYLShowTime;
- (void)resetContinuouslySameCardDict;
- (void)reportSameCardTypeWithMainVC:(id)a0;
- (void)handleVisibleChange:(BOOL)a0 withMainVC:(id)a1;
- (void)reportMallGYLShowTimeWithMainVC:(id)a0;
- (void)reportCardAfterScroll:(BOOL)a0 mainVC:(id)a1;
- (id)getItemRequestID:(id)a0;
- (void)checkSameCardTagWithMainVC:(id)a0;
- (long long)checkCardTags:(id)a0 withKey:(id)a1 repeatNum:(long long)a2;
- (void)reportSameCardTagWithModel:(id)a0 mainVC:(id)a1 feedVC:(id)a2 index:(long long)a3 businessType:(id)a4;
- (void)appendCardRecord:(id)a0 index:(long long)a1 isVisible:(BOOL)a2 isFirstShow:(BOOL)a3;
- (void)dropDismissCardRecordsAfterRefreshWithMainVC:(id)a0;
- (void)pageVisibleChange:(BOOL)a0 withMainVC:(id)a1;
- (void)appActiveChange:(BOOL)a0 withMainVC:(id)a1;
- (void)reportCardAfterScrollWithMainVC:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
