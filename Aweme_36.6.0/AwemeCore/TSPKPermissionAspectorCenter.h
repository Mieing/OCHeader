@class NSMutableArray;

@interface TSPKPermissionAspectorCenter : NSObject

@property (retain, nonatomic) NSMutableArray *aspectors;

+ (id)sharedInstance;

- (void)addAspector:(id)a0;
- (void)removeAspector:(id)a0;
- (void)invokeAspectors:(id)a0;
- (void).cxx_destruct;

@end
