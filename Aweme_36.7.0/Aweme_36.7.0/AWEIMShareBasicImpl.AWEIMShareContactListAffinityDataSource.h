@class NSString;

@interface AWEIMShareBasicImpl.AWEIMShareContactListAffinityDataSource : NSObject <AWEIMShareContactListLocalExternalDataSourceProtocol> {
    void /* function */ uniqueSourceKey;
}

@property (nonatomic, copy) NSString *uniqueSourceKey;

- (void)fetchShareContactListWithContext:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
