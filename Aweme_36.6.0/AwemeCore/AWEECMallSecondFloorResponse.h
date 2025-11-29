@class AWEECMallSecondFloorModel;

@interface AWEECMallSecondFloorResponse : IESECBaseApiModel

@property (retain, nonatomic) AWEECMallSecondFloorModel *secondFloor;
@property (nonatomic) double updateTime;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
