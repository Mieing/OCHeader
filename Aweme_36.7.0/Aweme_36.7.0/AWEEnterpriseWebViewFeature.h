@class NSString, NSMutableSet;

@interface AWEEnterpriseWebViewFeature : AWEFeature <AWEEnterpriseWebViewProtocol>

@property (nonatomic) BOOL businessBlocked;
@property (retain, nonatomic) NSMutableSet *innerBusinessSafeURLs;
@property (copy, nonatomic) NSString *requestURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)aliasName;

- (void)checkDownloadUrl:(id)a0 webUrl:(id)a1;
- (BOOL)businessBlockMode;
- (id)businessSafeURLs;
- (void)verifyRequestURL:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
