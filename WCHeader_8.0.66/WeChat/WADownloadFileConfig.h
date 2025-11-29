@class NSString;

@interface WADownloadFileConfig : WANetworkConfigBase <WANetworkConfigBaseDataSource>

@property (nonatomic) unsigned int downloadFileMaxConcurrentCount;
@property (nonatomic) unsigned long long downloadFileMaxFileSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadConfig:(id)a0;
- (id)configDomainList;
- (unsigned int)configMaxTimeoutMS;
- (unsigned int)configTimeoutMS;
- (unsigned int)configDefaultTimeoutMS;

@end
