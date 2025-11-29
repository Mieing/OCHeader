@class NSString;

@interface IESLiveGiftExtraAPIImpl : HTSLiveApi <IESLiveGiftExtraAPI>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestGiftExtraApiWithRequestParams:(id)a0 completion:(id /* block */)a1;

@end
