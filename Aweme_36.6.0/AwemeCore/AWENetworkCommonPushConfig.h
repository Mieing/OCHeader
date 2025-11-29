@interface AWENetworkCommonPushConfig : NSObject

@property (nonatomic) unsigned long long byteSyncThreadID;
@property (copy, nonatomic) id /* block */ monitorBlock;

- (void).cxx_destruct;

@end
