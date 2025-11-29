@class NSString;
@protocol ACCCreationContext;

@interface ACCWorkspaceReader_Proxy : NSObject <ACCWorkspaceReader>

@property (weak, nonatomic) id<ACCCreationContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)projectsCount;
- (BOOL)multiProjects;
- (void).cxx_destruct;

@end
