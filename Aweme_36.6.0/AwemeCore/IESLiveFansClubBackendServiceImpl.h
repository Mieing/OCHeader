@class NSString;

@interface IESLiveFansClubBackendServiceImpl : NSObject <IESLiveFansClubBackendService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestFansClubBackEndData:(id /* block */)a0;

@end
