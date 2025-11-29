@interface _AVMDLiOSMultiNetwork : NSObject

@property (nonatomic) unsigned int *networkIndexs;
@property (nonatomic) int curIndex;
@property (nonatomic) BOOL isEnableCellularUp;

+ (id)shareInstance;

- (BOOL)switchToDefaultNetwork;
- (BOOL)switchToCellularNetwork;
- (void)updateNetworkIndex;
- (unsigned int)getCurNetworkIndex;
- (void)enableCellularUp:(BOOL)a0;
- (id)init;
- (void)dealloc;

@end
