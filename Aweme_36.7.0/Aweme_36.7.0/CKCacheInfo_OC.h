@class NSString, NSDictionary;

@interface CKCacheInfo_OC : NSObject {
    struct shared_ptr<ckresource::cache::CKCacheInfo> { struct CKCacheInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _cppModel;
}

@property (copy, nonatomic) NSString *primaryKey;
@property (copy, nonatomic) NSString *effectId;
@property (copy, nonatomic) NSString *panel;
@property (copy, nonatomic) NSString *resourceId;
@property (copy, nonatomic) NSString *uri;
@property (copy, nonatomic) NSString *modelName;
@property (nonatomic) long long type;
@property (nonatomic) long long bizSpace;
@property (nonatomic) long long source;
@property (copy, nonatomic) NSString *resourceName;
@property (copy, nonatomic) NSString *resourceType;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *md5;
@property (nonatomic) double lastAccessTime;
@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned long long useCount;
@property (copy, nonatomic) NSDictionary *extraMap;

+ (id)toAbsolutePath:(id)a0;
+ (id)toRelativePath:(id)a0;

- (id)initWithCppModel:(const void *)a0;
- (struct shared_ptr<ckresource::cache::CKCacheInfo> { struct CKCacheInfo *x0; struct __shared_weak_count *x1; })cppModel;
- (void).cxx_destruct;
- (id)init;
- (id).cxx_construct;

@end
