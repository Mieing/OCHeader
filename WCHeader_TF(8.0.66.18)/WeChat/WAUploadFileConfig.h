@class NSString;

@interface WAUploadFileConfig : WANetworkConfigBase <WANetworkConfigBaseDataSource>

@property (nonatomic) unsigned int uploadFileMaxConcurrentCount;
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
