@class NSString, IESLiveGameOpenPlatformHTTPSessionManager, NSArray, IESLiveGameOpenPlatformRequestChecker, IESLiveGameOpenPlatformRequestDispatchQueue;

@interface IESLiveGameOpenPlatformRequestManager : NSObject

@property (retain, nonatomic) IESLiveGameOpenPlatformHTTPSessionManager *httpSessionManager;
@property (retain, nonatomic) IESLiveGameOpenPlatformRequestDispatchQueue *dispatchQueue;
@property (retain, nonatomic) IESLiveGameOpenPlatformRequestChecker *checker;
@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) double globalTimeout;
@property (copy, nonatomic) NSString *versionType;
@property (retain, nonatomic) NSArray *domainAllowListArray;

- (void)didSetAttachingDIContext;
- (void)requestWithJSBResultDic:(id)a0 successBlock:(id /* block */)a1 failBlock:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
