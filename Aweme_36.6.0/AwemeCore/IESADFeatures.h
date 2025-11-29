@class NSLock, NSMutableArray, NSMutableDictionary;

@interface IESADFeatures : NSObject

@property (retain, nonatomic) NSMutableArray *historyArray;
@property (retain, nonatomic) NSMutableDictionary *historyDetailDic;
@property (nonatomic) long long maxHistoryCount;
@property (nonatomic) long long realCount;
@property (retain, nonatomic) NSLock *historyLock;
@property (nonatomic) long long adRit;

- (void)trackEvent:(unsigned long long)a0 withParams:(id)a1;
- (id)getHistoryAdInfoWith:(id)a0;
- (void)updateHistoryArrayWithAid:(id)a0;
- (BOOL)fillFeatures:(id)a0 withConfig:(id)a1;
- (void).cxx_destruct;

@end
