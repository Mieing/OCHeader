@class NSString, AWEStorage, AWEStorageFilePermanent;

@interface AWENoticeStorage : NSObject

@property (class, nonatomic, readonly) NSString *storageDomain;
@property (class, nonatomic, readonly) AWEStorage *kvStorage;
@property (class, nonatomic, readonly) AWEStorageFilePermanent *fileStorage;

- (void).cxx_destruct;
- (id)init;

@end
