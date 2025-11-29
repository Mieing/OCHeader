@class NSString;

@interface IESECOpenAppServiceImpl : NSObject <IESECOpenAppService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)openTaobaoAppADTrackWithEventName:(id)a0 Params:(id)a1;
+ (void)openTaobaoAppUserTrackWithEventName:(id)a0 Params:(id)a1;


@end
