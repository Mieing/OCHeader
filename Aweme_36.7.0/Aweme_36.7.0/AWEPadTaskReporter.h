@class NSCache, NSMutableArray, NSString;

@interface AWEPadTaskReporter : HTSService <AWEPadTaskReporter>

@property (retain, nonatomic) NSCache *responseCache;
@property (retain, nonatomic) NSMutableArray *requestRecords;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;
+ (id)defaultReporter;

- (void)reportTaskWithScene:(id)a0 launchFrom:(id)a1;
- (void)checkTargetUserForSecUid:(id)a0 scene:(id)a1;
- (id)getKeyForScene:(id)a0;
- (void).cxx_destruct;
- (id)weakTarget;

@end
