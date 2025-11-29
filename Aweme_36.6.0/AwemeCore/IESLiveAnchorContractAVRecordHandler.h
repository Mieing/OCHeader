@class IESLiveAnchorContractAVRecordParamModel, IESLiveAnchorContractAVRecordViewController;

@interface IESLiveAnchorContractAVRecordHandler : NSObject

@property (retain, nonatomic) IESLiveAnchorContractAVRecordParamModel *config;
@property (retain, nonatomic) IESLiveAnchorContractAVRecordViewController *recordVC;
@property (copy, nonatomic) id /* block */ completeBlock;

- (void)checkAVPermissionWithVideoPrivacyCert:(id)a0 audioPrivacyCert:(id)a1;
- (id)createRecordVC;
- (void)startAVRecordWithConfig:(id)a0 videoPrivacyCert:(id)a1 audioPrivacyCert:(id)a2 completeBlock:(id /* block */)a3;
- (void).cxx_destruct;

@end
