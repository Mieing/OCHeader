@class NSString, NSMutableDictionary, DitoPageContext;
@protocol DitoExtensionContainerProtocol;

@interface DitoPerformanceTaskManager : NSObject <DitoExtensionProtocol>

@property (retain, nonatomic) NSMutableDictionary *taskMap;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
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
