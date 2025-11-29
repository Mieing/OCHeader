@class NSString;

@interface IESIMLiveInfraService : HTSService <IESIMLiveInfraService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createLiveApiRequest;
- (void)getWithRequest:(id)a0;

@end
