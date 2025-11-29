@class NSData, NSMutableArray;

@interface MMFinderLiveSpeedTestNotifyModel : NSObject

@property (copy, nonatomic) NSMutableArray *serverAddrList;
@property (nonatomic) unsigned int interval;
@property (nonatomic) unsigned int reqsize;
@property (retain, nonatomic) NSData *ctx;
@property (nonatomic) unsigned int concurrentNum;

+ (id)changeModelWithNotify:(id)a0;
+ (id)getServerAddrListWithNotify:(id)a0;

- (void).cxx_destruct;

@end
