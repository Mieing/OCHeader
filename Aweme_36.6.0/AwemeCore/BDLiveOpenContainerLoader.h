@interface BDLiveOpenContainerLoader : NSObject

+ (id)validateSchemaFromUrl:(id)a0 listener:(id)a1;
+ (void)useStrictSchema:(BOOL)a0;
+ (id)preload:(id)a0 params:(id)a1 strategy:(id)a2 listener:(id)a3;
+ (id)startWithSchema:(id)a0 params:(id)a1 strategy:(id)a2 listener:(id)a3;
+ (BOOL)isValidSchema:(id)a0;

@end
