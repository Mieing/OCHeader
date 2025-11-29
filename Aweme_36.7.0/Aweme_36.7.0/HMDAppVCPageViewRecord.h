@class NSDictionary, NSMutableDictionary;

@interface HMDAppVCPageViewRecord : NSObject

@property (retain, nonatomic) NSMutableDictionary *pvInfo;
@property (retain, nonatomic) NSDictionary *lastPvInfo;
@property (nonatomic) int changedTimes;

+ (id)shared;

- (void)reportLastPageViewInfoAsync;
- (void)recordPageViewForVCAsync:(id)a0;
- (void)writePageViewInfoToFileAsync;
- (id)reportLastPageViewInfo;
- (void)readHistoryPageViewStatisticInfoFromFile;
- (id)getHistoryPageViewStatisticInfo;
- (void).cxx_destruct;
- (id)init;

@end
