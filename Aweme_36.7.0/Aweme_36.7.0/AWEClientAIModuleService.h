@class NSDictionary, NSString;
@protocol AWEClientAIUIHelper, AWEClientAIAppLogHelper;

@interface AWEClientAIModuleService : HTSService <AWEClientAIModuleService>

@property (retain, nonatomic) id<AWEClientAIUIHelper> UIHelper;
@property (retain, nonatomic) id<AWEClientAIAppLogHelper> appLogHelper;
@property (retain, nonatomic) NSDictionary *serverPortraits;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)portraitContextHelper;
- (void)processSolariaServerPortraits:(id)a0 isUpdate:(BOOL)a1;
- (void)subscribeSolariaServerUpdateEvent:(id /* block */)a0;
- (id)awemeHelper;
- (void).cxx_destruct;

@end
