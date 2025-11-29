@class NSMutableArray;

@interface IESGCPContainerManager : NSObject

@property (retain, nonatomic) NSMutableArray *containerArray;

+ (id)sharedManager;

- (id)containerWithDIContext:(id)a0;
- (void).cxx_destruct;
- (void)addContainer:(id)a0;
- (void)removeContainer:(id)a0;

@end
