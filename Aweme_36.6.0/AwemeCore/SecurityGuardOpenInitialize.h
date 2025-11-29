@class NSString;

@interface SecurityGuardOpenInitialize : NSObject <ISecurityGuardOpenInitialize>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (Class)getMetaClass;
- (id)getSgRootPath;
- (id)getApplicaitonFilePath;
- (void)cleanSgRoot:(id)a0 withAppTime:(id)a1;
- (id)getInitConfig:(id)a0 withAppPath:(id)a1;
- (BOOL)privateInitialize:(void *)a0;
- (long long)initialize;
- (long long)initialize:(void *)a0;

@end
