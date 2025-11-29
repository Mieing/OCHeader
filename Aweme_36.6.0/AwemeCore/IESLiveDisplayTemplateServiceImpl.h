@class NSString;

@interface IESLiveDisplayTemplateServiceImpl : NSObject <HTSLiveTemplateProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)templateForKey:(id)a0 defaultPattern:(id)a1;
- (id)parseDisplayText:(id)a0 withDIContext:(id)a1;
- (id)parseCombinedText:(id)a0 configuration:(id)a1 diContext:(id)a2;
- (id)parseDisplayText:(id)a0 configuration:(id)a1 diContext:(id)a2;
- (id)parsePiecesFromDisplayText:(id)a0 configuration:(id)a1 diContext:(id)a2;
- (id)parseEnableSchemaInfoDisplayText:(id)a0 configuration:(id)a1 diContext:(id)a2;
- (id)init;

@end
