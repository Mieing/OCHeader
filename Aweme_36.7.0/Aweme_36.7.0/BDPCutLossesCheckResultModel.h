@class BDPCutLossesInfoModel;

@interface BDPCutLossesCheckResultModel : NSObject

@property (nonatomic) BOOL shouldCutLosses;
@property (retain, nonatomic) BDPCutLossesInfoModel *info;

- (void).cxx_destruct;

@end
