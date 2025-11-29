@class NSString, NSDictionary;

@interface IESECGeckoResourceServiceWrapper : NSObject <IESECAccessAnnieResourceService, IESECGeckoResourceService>

@property (retain, nonatomic) NSString *accessKey;
@property (retain, nonatomic) NSString *resourceVersion;
@property (retain, nonatomic) NSDictionary *resourceChannels;
@property (retain, nonatomic) NSString *gurdCDNPath;
@property (nonatomic) BOOL enableMultiThreadOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchAnnieEcomResource:(id)a0;
+ (void)fetchAnnieEcomResourceOnLanuch;
+ (id)invocationWithClass:(Class)a0 forSelector:(SEL)a1;
+ (id)sharedInstance;

- (id)getDataWithName:(id)a0 resourceStatus:(long long *)a1;
- (void)asyncGetDataWithName:(id)a0 completion:(id /* block */)a1 resourceStatus:(long long *)a2;
- (id)getFilePathWithName:(id)a0 resourceStatus:(long long *)a1;
- (void)asyncGetFilePathWithName:(id)a0 completion:(id /* block */)a1 resourceStatus:(long long *)a2;
- (id)getImageWithName:(id)a0 resourceStatus:(long long *)a1;
- (void)asyncGetImageWithName:(id)a0 completion:(id /* block */)a1 resourceStatus:(long long *)a2;
- (void)fetchIESECResourceIfNeeded;
- (void)registerGeckoAccessKey;
- (void)setupDefaultPrefixToAk;
- (void)addGeckoCustomParams;
- (void)enableMultiThreadOpt:(BOOL)a0;
- (void).cxx_destruct;

@end
