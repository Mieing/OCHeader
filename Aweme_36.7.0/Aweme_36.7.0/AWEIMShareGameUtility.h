@class NSString;

@interface AWEIMShareGameUtility : NSObject <AWEIMShareGameUtilityInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)preloadSchemaWithMessage:(id)a0;
+ (id)schemaFromMessage:(id)a0;
+ (id)__generateExternalParams:(id)a0;
+ (id)sharedInstance;

- (void)showShareGameWithMessage:(id)a0;
- (void)preloadSchemaWithMessage:(id)a0;

@end
