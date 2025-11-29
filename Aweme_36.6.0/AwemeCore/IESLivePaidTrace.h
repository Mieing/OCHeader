@class NSString;

@interface IESLivePaidTrace : NSObject <IESLivePaidTraceInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)traceWithEventType:(id)a0 paidScene:(long long)a1 paidChannel:(long long)a2;
+ (void)traceWithEventType:(id)a0 paidScene:(long long)a1 paidChannel:(long long)a2 extraParameters:(id)a3;
+ (void)traceWithEventType:(id)a0 paidScene:(long long)a1 paidChannel:(long long)a2 room:(id)a3 extraParameters:(id)a4 atDataSourceModuleName:(id)a5 dataSourceProductID:(id)a6;
+ (id)paidChannelStringForPaidChannel:(long long)a0;
+ (id)paidSceneStringForPaidScene:(long long)a0;

- (void)traceWithEventType:(id)a0 paidScene:(long long)a1 paidChannel:(long long)a2 room:(id)a3 extraParameters:(id)a4 atDataSourceModuleName:(id)a5 dataSourceProductID:(id)a6;

@end
