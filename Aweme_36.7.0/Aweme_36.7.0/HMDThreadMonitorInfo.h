@class NSString, NSMutableDictionary;

@interface HMDThreadMonitorInfo : NSObject

@property (retain, nonatomic) NSMutableDictionary *allThreadDic;
@property (copy, nonatomic) NSString *mostThread;
@property (nonatomic) unsigned long long mostThreadCount;
@property (nonatomic) unsigned int mostThreadID;
@property (nonatomic) unsigned long long allThreadCount;

- (void).cxx_destruct;
- (id)init;

@end
