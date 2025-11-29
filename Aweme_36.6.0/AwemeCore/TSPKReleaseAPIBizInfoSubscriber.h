@class NSString, NSMutableDictionary;
@protocol TSPKLock;

@interface TSPKReleaseAPIBizInfoSubscriber : NSObject <TSPKSubscriber>

@property (retain, nonatomic) NSMutableDictionary *mutableInfo;
@property (retain, nonatomic) id<TSPKLock> lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (BOOL)canHandelEvent:(id)a0;
- (id)hanleEvent:(id)a0;
- (id)getTimestampInfoWithDataType:(id)a0;
- (void).cxx_destruct;
- (id)uniqueId;
- (id)init;

@end
