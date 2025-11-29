@class NSString, NSArray, NSDictionary;

@interface CKDownloadInfo_OC : NSObject {
    struct shared_ptr<ckresource::net::CKDownloadInfo> { struct CKDownloadInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _cppValue;
}

@property (copy, nonatomic) NSString *filePath;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSDictionary *extraMap;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) double duration;
@property (nonatomic) double startDownloadTime;

- (struct shared_ptr<ckresource::net::CKDownloadInfo> { struct CKDownloadInfo *x0; struct __shared_weak_count *x1; })cppValue;
- (id)initWithCPPValue:(struct shared_ptr<ckresource::net::CKDownloadInfo> { struct CKDownloadInfo *x0; struct __shared_weak_count *x1; })a0;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;
- (id)toString;

@end
