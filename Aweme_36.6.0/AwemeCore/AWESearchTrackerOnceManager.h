@class NSMutableDictionary;

@interface AWESearchTrackerOnceManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *recordMap;

- (BOOL)hasRecordWithUniqueID:(id)a0;
- (void)addRecordWithUniqueID:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)description;

@end
