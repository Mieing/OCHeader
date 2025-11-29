@class NSNumber;

@interface IESLiveGetCurrentDegradeInfoDataModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *liveDegrade;
@property (retain, nonatomic) NSNumber *lowMemory;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
