@class NSString;

@interface AWELuckySDKRouterHandler : HTSService <AWELuckySDKRouterHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canOpenURLString:(id)a0;
+ (BOOL)openURLString:(id)a0;
+ (BOOL)isLuckyCatURL:(id)a0;
+ (BOOL)openLuckyCatURL:(id)a0;
+ (BOOL)shouldAdaptHalfScreenPage:(id)a0;
+ (void)openHalfScreenPolarisPage:(id)a0;


@end
