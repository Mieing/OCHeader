@class AWESearchSmartPagingServiceStorage;

@interface AWESearchSmartPagingService : NSObject

@property (copy, nonatomic) AWESearchSmartPagingServiceStorage *storage;

- (id)fetchFeatureInfoWithConfig:(id)a0;
- (id)fetchFeatureInfoWithConfig:(id)a0 withTryLock:(BOOL *)a1;
- (void).cxx_destruct;

@end
