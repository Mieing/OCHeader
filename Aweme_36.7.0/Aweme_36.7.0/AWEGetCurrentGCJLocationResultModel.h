@class AWEGetCurrentGCJLocationDataModel;

@interface AWEGetCurrentGCJLocationResultModel : IESLiveBridgeModel

@property (nonatomic) long long permission;
@property (retain, nonatomic) AWEGetCurrentGCJLocationDataModel *data;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
