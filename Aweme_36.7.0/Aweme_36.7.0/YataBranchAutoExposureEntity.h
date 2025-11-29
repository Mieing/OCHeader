@class YataRenderNode;

@interface YataBranchAutoExposureEntity : NSObject

@property (weak, nonatomic) YataRenderNode *branchNode;
@property (nonatomic) long long exposureCount;

- (void).cxx_destruct;

@end
