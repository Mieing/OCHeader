@class AWENearbyDotModel, AWENearbyGeneralGuideModel;

@interface AWEGrouponComponentAssociateModel : NSObject

@property (retain, nonatomic) AWENearbyGeneralGuideModel *generalGuideModel;
@property (retain, nonatomic) AWENearbyDotModel *dotModel;
@property (nonatomic) long long showType;
@property (nonatomic) long long dataSource;

- (void).cxx_destruct;

@end
