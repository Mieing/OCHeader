@interface GULSecureCoding : NSObject

+ (id)archivedDataWithRootObject:(id)a0 error:(id *)a1;
+ (id)archivingErrorWithException:(id)a0;
+ (id)unarchivedObjectOfClass:(Class)a0 fromData:(id)a1 error:(id *)a2;
+ (id)unarchivedObjectOfClasses:(id)a0 fromData:(id)a1 error:(id *)a2;

@end
