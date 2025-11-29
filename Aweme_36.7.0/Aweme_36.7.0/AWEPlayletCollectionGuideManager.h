@class NSString, NSMutableArray;

@interface AWEPlayletCollectionGuideManager : NSObject <AWEPlayletFeedColletionManagerProtocol>

@property (retain, nonatomic) NSMutableArray *collectPlaylets;
@property (retain, nonatomic) NSMutableArray *unCollectPlaylets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updatePlayletWatchRecordForPlayletID:(id)a0;
+ (void)cleanMissNumRecord;
+ (void)collectionButtonDidShowForModel:(id)a0;
+ (void)collectionButtonDidClickForModel:(id)a0;
+ (BOOL)hasShowPlayletCollectionGuideAboveMissLimit;
+ (BOOL)hasShowAboveLimitForPlaylet:(id)a0;
+ (id)sharedManager;
+ (id)currentDateString;

- (void)collectionStatusChangedNoti:(id)a0;
- (BOOL)hasAlreadyCollectionPlaylet:(id)a0;
- (BOOL)hasAlreadyUnCollectionPlaylet:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
