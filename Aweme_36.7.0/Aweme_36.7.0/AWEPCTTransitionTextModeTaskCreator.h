@class NSString;

@interface AWEPCTTransitionTextModeTaskCreator : NSObject <AWEPCTBusinessTaskCreatorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createTaskWithContext:(id)a0;
+ (void)startWithContext:(id)a0 finishHandler:(id /* block */)a1;
+ (void)startLandingToTextInputPageWithContext:(id)a0;
+ (void)startLandingToEditPageWithContext:(id)a0;
+ (id)commonLandingParamsWithContext:(id)a0;


@end
