@class NSString, AWESearchCommonChainMonitor, NSDictionary;

@interface AWESearchClientAIBaseManagerConfig : NSObject

@property (retain, nonatomic) AWESearchCommonChainMonitor *managerMonitor;
@property (copy, nonatomic) NSString *taskName;
@property (copy, nonatomic) NSString *businessName;
@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *scene;
@property (copy, nonatomic) NSString *searchID;
@property (copy, nonatomic) NSDictionary *extraData;
@property (nonatomic) long long gapTime;

- (void).cxx_destruct;
- (id)init;

@end
