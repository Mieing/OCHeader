@class NSString;

@interface IESIMSaaSAdapterService : HTSService <IESIMSaaSAdapterService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableIMCoreSDKInitRefactorWithoutPreCreateTimx;
- (id)sqlite3CustomVersion;

@end
