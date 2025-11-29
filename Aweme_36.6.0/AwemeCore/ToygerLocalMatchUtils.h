@interface ToygerLocalMatchUtils : NSObject

+ (BOOL)cleanTemplate;
+ (BOOL)saveTemplate:(id)a0 withUserId:(id)a1;
+ (BOOL)saveTemplate:(id)a0 withUserId:(id)a1 atPath:(id)a2;
+ (id)getTemplatewithUserId:(id)a0;
+ (BOOL)checkTemplateStatus;
+ (id)uid;

@end
