@class NSString;

@interface IESECSliceXEcomInfoServiceImpl : NSObject <SLIEComInfoService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ecomSDKVersion;
+ (BOOL)isSaaSApp;


@end
