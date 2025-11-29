@class NSMutableArray;

@interface StorageUsageSummaryModel : NSObject

@property (nonatomic) unsigned long long appSize;
@property (retain, nonatomic) NSMutableArray *detailModels;
@property (nonatomic) long long deviceSize;
@property (nonatomic) long long freeSize;

- (id)init;
- (id)initWithScanStat:(id)a0;
- (void)refreshModelWithAppGroup:(unsigned long long)a0 canCleanCache:(unsigned long long)a1 otherUser:(unsigned long long)a2 vacuumChatLog:(unsigned long long)a3 vacuumOther:(unsigned long long)a4 deepCleanResource:(unsigned long long)a5 isEmptySessionZeroSize:(BOOL)a6;
- (void)initForLoading;
- (void)updateAppSizeWithDetailSize;
- (void)upadateRawSizeToShow;
- (id)getCacheDes;
- (id)description;
- (BOOL)p_isEmptyChatLog;
- (void).cxx_destruct;

@end
