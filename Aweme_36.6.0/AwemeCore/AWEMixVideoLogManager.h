@class NSString;

@interface AWEMixVideoLogManager : NSObject <AWEMixVideoLogManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)recordMixVideoAutoPlayFinishWithIndex:(id)a0 nextIndex:(id)a1 model:(id)a2 nextModel:(id)a3 scene:(id)a4 logExtraDict:(id)a5;
+ (void)recordMixVideoTappedLogWithIndex:(long long)a0 expectedModel:(id)a1 expectedDataController:(id)a2 scene:(id)a3 logExtraDict:(id)a4;
+ (void)recordConfigErrIfNeedWithModel:(id)a0 entranceModel:(id)a1 scene:(id)a2;
+ (void)recordMixVideoSlideLogWithIndex:(long long)a0 newIndex:(long long)a1 directionTop:(BOOL)a2 model:(id)a3 newModel:(id)a4 scene:(id)a5 logExtraDict:(id)a6;


@end
