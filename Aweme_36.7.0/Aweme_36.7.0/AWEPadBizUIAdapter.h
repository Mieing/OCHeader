@class NSString;

@interface AWEPadBizUIAdapter : NSObject <AWEPadBizUIAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableAutoRotation;
+ (id)createAdapter;
+ (Class)weakTargetClass;

- (void)pushUI:(id)a0 adaptWidthconstraint:(id)a1;
- (BOOL)enablePanelUIAdapted;
- (void)performPadUIAdapterExecution:(id /* block */)a0;
- (BOOL)enableAutoRotation;
- (void)performAction:(id /* block */)a0;
- (id)weakTarget;

@end
