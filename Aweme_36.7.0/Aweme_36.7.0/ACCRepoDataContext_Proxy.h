@class NSString;
@protocol ACCCreationContext;

@interface ACCRepoDataContext_Proxy : NSObject <ACCRepoDataContext, ACCUseCaseContext>

@property (weak, nonatomic) id<ACCCreationContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
