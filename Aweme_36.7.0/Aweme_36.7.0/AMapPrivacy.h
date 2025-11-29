@class NSNumber, NSString;

@interface AMapPrivacy : NSObject

@property (retain, nonatomic) NSNumber *privacyInfo;
@property (retain, nonatomic) NSNumber *privacyShow;
@property (retain, nonatomic) NSString *show2SDK;
@property (retain, nonatomic) NSString *show2SDKVer;
@property (retain, nonatomic) NSNumber *showTime;
@property (retain, nonatomic) NSNumber *privacyAgree;
@property (retain, nonatomic) NSNumber *agreeTime;
@property (retain, nonatomic) NSString *agree2SDK;
@property (retain, nonatomic) NSString *agree2SDKVer;
@property (retain, nonatomic) NSNumber *changeStamp;
@property (retain, nonatomic) NSNumber *uploadStamp;
@property (nonatomic) BOOL isFirstCheck;

- (void)savePrivacyCache:(long long)a0;
- (void)uploadPrivacy:(long long)a0 isFirst:(BOOL)a1;
- (void)moveUpload2Reload:(id)a0;
- (void)reloadCaches;
- (BOOL)compatibleCacheData;
- (void)saveUploadCache:(id)a0 timestamp:(long long)a1;
- (void)removeUploadCache:(long long)a0;
- (id)cacheFileName:(long long)a0;
- (void)uploadPrivacyData:(id)a0 timestamp:(long long)a1 complete:(id /* block */)a2;
- (void)removeReloadCache:(long long)a0;
- (void)updatePrivacyShow:(long long)a0 privacyInfo:(long long)a1 component:(id)a2;
- (void)updatePrivacyAgree:(long long)a0 component:(id)a1;
- (BOOL)checkPrivacyStatus:(id *)a0 component:(id)a1;
- (void)loadPrivacyCache;
- (void).cxx_destruct;
- (id)init;
- (id)uploadFiles;

@end
