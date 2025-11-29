@class NSString;
@protocol EcsCoreEcsOpenHandler_Ur;

@interface EcsOpenBaseRouter : NSObject <IEcsOpenRouter>

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) id<EcsCoreEcsOpenHandler_Ur> urObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithName:(id)a0;

- (id)init;
- (BOOL)canHandle:(id)a0 context:(id)a1;
- (void)handlePreload:(id)a0 context:(id)a1 preloadConfig:(id)a2 callback:(id)a3;
- (void)handleOpen:(id)a0 context:(id)a1 callback:(id)a2;
- (void).cxx_destruct;

@end
