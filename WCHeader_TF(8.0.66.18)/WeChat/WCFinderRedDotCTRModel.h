@class NSMutableDictionary;

@interface WCFinderRedDotCTRModel : NSObject

@property (retain, nonatomic) NSMutableDictionary *businessCTRDic;

- (id)init;
- (id)description;
- (void)_resetAllClientInfo;
- (void)mergeFromSvrInfo:(id)a0 updateTime:(long long)a1;
- (void)increaseExposeCount:(unsigned long long)a0;
- (void)_debouncePerformSyncBusinessPctrRedDotDic;
- (void)syncBusinessPctrRedDotDic;
- (void)increaseClickCount:(unsigned long long)a0;
- (id)getCtrBusinessRangeArray;
- (id)getFeatureBusinessTypePriorities;
- (BOOL)isFeatureBusinessType:(unsigned long long)a0;
- (BOOL)isSvrBusinessType:(unsigned long long)a0;
- (id)getSortedBusinessTypePriorities;
- (double)getTargetCtrValue:(unsigned long long)a0;
- (id)getBusinessCtrDic;
- (long long)getRedDotClickCountByBusinessType:(unsigned long long)a0 intervalType:(int)a1;
- (long long)getRedDotExposeCountByBusinessType:(unsigned long long)a0 intervalType:(int)a1;
- (void).cxx_destruct;

@end
