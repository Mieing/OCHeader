@class NSMutableSet;

@interface IESLivePreloadRequestInjection : NSObject

@property (retain, nonatomic) NSMutableSet *classesSet;
@property (retain, nonatomic) NSMutableSet *backendClassesSet;

+ (id)instance;

- (void)loadActionRegistry;
- (void).cxx_destruct;
- (id)init;

@end
