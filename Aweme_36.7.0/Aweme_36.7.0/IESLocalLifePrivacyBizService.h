@class NSString;

@interface IESLocalLifePrivacyBizService : HTSService <IESLocalLifePrivacyBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openURL:(id)a0 withCert:(id)a1 options:(id)a2 completionHandler:(id /* block */)a3;
+ (void)setCertToThread:(id)a0 forKey:(id)a1;
+ (void)removeCertFromThread:(id)a0 forKey:(id)a1;
+ (id)createBDHybridPageContextFromPageId:(id)a0 type:(id)a1;
+ (id)createBDHybridAPIContextFromBridgeName:(id)a0;

- (void)openSettingWithCert:(id)a0 enterFrom:(id)a1 error:(id *)a2;
- (void)setPasteboardWithCert:(id)a0 withText:(id)a1 error:(id *)a2;

@end
