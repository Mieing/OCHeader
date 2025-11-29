@class NSString;

@interface IESECEZTFServiceImpl : NSObject <IESECEZTFService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)invokeEZTF:(id)a0 data:(id)a1 completion:(id /* block */)a2;


@end
