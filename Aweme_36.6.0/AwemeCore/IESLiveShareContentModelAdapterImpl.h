@class NSString;

@interface IESLiveShareContentModelAdapterImpl : IESLiveBaseAdapter <IESLiveShareContentModelAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)buildWithShareType:(long long)a0 roomModel:(id)a1 completion:(id /* block */)a2;


@end
