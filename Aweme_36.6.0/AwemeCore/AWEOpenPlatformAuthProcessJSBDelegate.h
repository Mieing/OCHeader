@class NSString;

@interface AWEOpenPlatformAuthProcessJSBDelegate : NSObject <AWEOpenPlatformAuthProcessPotocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fillExtraOAuthParamsForAuthProcess:(id)a0 commonParams:(id)a1;


@end
