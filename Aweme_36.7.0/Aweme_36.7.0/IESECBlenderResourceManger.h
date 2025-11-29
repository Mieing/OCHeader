@class NSString;

@interface IESECBlenderResourceManger : NSObject <IESECBlenderResourceManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchResourceAsync:(id)a0 parameters:(id)a1 completion:(id /* block */)a2;
+ (id)getSourceType:(long long)a0;
+ (void)fetchDSLFromServer:(id)a0 completion:(id /* block */)a1;


@end
