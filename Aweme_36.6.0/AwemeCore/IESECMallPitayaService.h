@class NSPointerArray;

@interface IESECMallPitayaService : NSObject

@property (retain, nonatomic) NSPointerArray *pitayaMsgHandlersArray;
@property (retain, nonatomic) NSPointerArray *pitayaMsgHandlersArrayForLG;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)registerLGGYLRefreshPitayaMessageWithModel:(id)a0;
- (void)registerGYLRefreshPitayaMessageWithModel:(id)a0;
- (void)__registerPitayaMessageHandler;
- (void)__registerLGPitayaMessageHandler;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
