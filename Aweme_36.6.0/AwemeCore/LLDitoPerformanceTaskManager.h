@class NSString, NSMutableDictionary, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface LLDitoPerformanceTaskManager : NSObject <LLDitoExtensionProtocol>

@property (retain, nonatomic) NSMutableDictionary *taskMap;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (id)startTaskWithPerformanceType:(id)a0 uniqueID:(id)a1 inStage:(id)a2;
- (id)endTaskWithKey:(id)a0;
- (id)fetchTaskWithKey:(id)a0;
- (id)taskKeyWithPerformanceType:(id)a0 uniqueID:(id)a1 inStage:(id)a2;
- (BOOL)addTask:(id)a0 withKey:(id)a1;
- (void).cxx_destruct;

@end
