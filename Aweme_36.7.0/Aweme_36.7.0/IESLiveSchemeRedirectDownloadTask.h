@class NSString;

@interface IESLiveSchemeRedirectDownloadTask : NSObject

@property (copy, nonatomic) NSString *geckoPkgID;

- (id)cdnMultiVersionCommonParameters;
- (long long)generateBucketWithDeviceID:(id)a0;
- (void)downLoadRedirectConfigWithCompeltion:(id /* block */)a0;
- (id)getGeckoPkgID;
- (void).cxx_destruct;

@end
