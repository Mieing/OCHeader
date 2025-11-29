@interface UTDevice : NSObject

+ (id)utdid;
+ (id)aid:(id)a0 token:(id)a1;
+ (void)aidAsync:(id)a0 token:(id)a1 aidDelegate:(id)a2;
+ (id)bundleSeedID;

@end
