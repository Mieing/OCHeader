@class NSMutableArray;

@interface IESECHalfPageFloatContainerManager : NSObject

@property (retain, nonatomic) NSMutableArray *containerStores;

+ (id)sharedInstance;

- (void)requireToShow:(id)a0 delegate:(id)a1;
- (void)requireToLastShow:(id)a0 delegate:(id)a1;
- (void)refreshCurrentContainers;
- (void)p_containerDelegate:(id)a0 handleContainer:(id)a1 showResult:(BOOL)a2;
- (void).cxx_destruct;
- (id)init;
- (id)containers;
- (void)removeContainer:(id)a0;

@end
