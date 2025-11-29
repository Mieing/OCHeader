@class NSString;

@interface IESLocalLifeTempo2Service : HTSService <IESLocalLifeTempo2Service>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTempoContainerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 configModel:(id)a1;
+ (id)createTempoConfigModelWithUrl:(id)a0;
+ (void)preloadWithUrl:(id)a0 resourceProvider:(id)a1 complete:(id /* block */)a2;
+ (void)registerWidget:(Class)a0;
+ (void)appLaunch;


@end
