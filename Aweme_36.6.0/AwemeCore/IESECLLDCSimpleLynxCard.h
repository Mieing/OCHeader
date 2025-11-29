@class PuzzleHybridContainer, IESECLLDCLynxManager, IESHYHybridContainerConfig, NSMutableArray;

@interface IESECLLDCSimpleLynxCard : NSObject

@property (retain, nonatomic) NSMutableArray *lynxContainers;
@property (retain, nonatomic) PuzzleHybridContainer *currentContainer;
@property (retain, nonatomic) IESHYHybridContainerConfig *config;
@property (weak, nonatomic) IESECLLDCLynxManager *delegate;
@property (nonatomic) BOOL canReload;

- (id)initWithConfig:(id)a0 delegate:(id)a1 canReload:(BOOL)a2;
- (id)getPuzzleHybridContainer;
- (void).cxx_destruct;
- (void)reload;

@end
