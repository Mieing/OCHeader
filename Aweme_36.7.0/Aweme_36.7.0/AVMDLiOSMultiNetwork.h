@interface AVMDLiOSMultiNetwork : NSObject

+ (BOOL)switchToDefaultNetwork;
+ (BOOL)switchToCellularNetwork;
+ (void)updateNetworkIndex;
+ (unsigned int)getCurNetworkIndex;
+ (void)enableCellularUp:(BOOL)a0;

@end
