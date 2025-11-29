@class NSString;

@interface ACCVideoDataMixedNLEModelRule : NSObject <ACCVideoDataCanvasRuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)updateEditCanvasState:(id)a0 publishModel:(id)a1 didChangeState:(BOOL *)a2;
+ (id)updatePublishCanvasState:(id)a0 publishModel:(id)a1 didChangeState:(BOOL *)a2;
+ (BOOL)shouldEnableSaveImagesToVideoOptWithPublishModel:(id)a0;
+ (BOOL)photoCanvasRuleBugFixEnabled;


@end
