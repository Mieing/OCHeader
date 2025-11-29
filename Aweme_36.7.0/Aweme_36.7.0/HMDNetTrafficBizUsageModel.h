@class NSString, NSMutableDictionary;

@interface HMDNetTrafficBizUsageModel : NSObject

@property (copy, nonatomic) NSString *bizName;
@property (nonatomic) unsigned long long totalUsage;
@property (nonatomic) unsigned long long wifiBackUsage;
@property (nonatomic) unsigned long long wifiFrontUsage;
@property (nonatomic) unsigned long long mobileBackUsage;
@property (nonatomic) unsigned long long mobileFrontUsage;
@property (retain, nonatomic) NSMutableDictionary *detailMap;

- (id)formatGroupByBizWithNeedSource:(BOOL)a0;
- (id)formatSourceDetailForNetType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
