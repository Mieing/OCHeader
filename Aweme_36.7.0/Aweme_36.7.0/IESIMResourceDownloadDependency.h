@class NSString;

@interface IESIMResourceDownloadDependency : HTSService <IESIMResourceDownloadDependency>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)forbiddenDownloadResourceByBusiness:(id)a0;

@end
