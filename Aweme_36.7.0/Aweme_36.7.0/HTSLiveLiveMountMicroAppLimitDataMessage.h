@class LiveMountMicroAppLimitData, HTSLiveCommon;

@interface HTSLiveLiveMountMicroAppLimitDataMessage : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveCommon *common;
@property (nonatomic) BOOL hasCommon;
@property (retain, nonatomic) LiveMountMicroAppLimitData *data_p;
@property (nonatomic) BOOL hasData_p;

+ (id)descriptor;

@end
