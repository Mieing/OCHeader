@class AFDLocalDataCenterResponseModel, AFDLocalDataCenterSyncResponseModel;

@interface AFDLocalDataSyncResponseModel : NSObject

@property (nonatomic) long long syncType;
@property (retain, nonatomic) AFDLocalDataCenterSyncResponseModel *singleResponseModel;
@property (retain, nonatomic) AFDLocalDataCenterResponseModel *multiResponseModel;

- (void).cxx_destruct;

@end
