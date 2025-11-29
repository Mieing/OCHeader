@class NSString;

@interface IESLLFuseEnterPOIBizService : HTSService <IESLLFuseEnterPOIBizService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleEnterPOIDetailWithRouteUrl:(id)a0 playInteractionDelegate:(id)a1;
+ (void)handleEnterPOIDetailWithURL:(id)a0 baseURL:(id)a1 urlParams:(id)a2 entranceType:(long long)a3 params:(id)a4 player:(id)a5 playInteractionDelegate:(id)a6;
+ (id)convertBizPlayVideoProtocol:(id)a0;
+ (id)convertAFDRichContentContainerViewControllerProtocol:(id)a0;
+ (id)convertAWEPOIPlayInteractionVCManagerProtocol:(id)a0;
+ (id)transitionWithURL:(id)a0 paramsDictionary:(id)a1;
+ (id)convertAWENearbyBigCardListCellShrinkProtocol:(id)a0;


@end
