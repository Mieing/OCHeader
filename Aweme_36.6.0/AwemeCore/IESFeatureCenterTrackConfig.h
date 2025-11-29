@class NSString, NSDictionary, IEFFeatureCenterConfig;

@interface IESFeatureCenterTrackConfig : NSObject

@property (nonatomic) long long realWaitMs;
@property (nonatomic) long long realReportSceneID;
@property (nonatomic) long long trackSceneID;
@property (nonatomic) BOOL zip_zero;
@property (nonatomic) long long runCount;
@property (nonatomic) long long trackType;
@property (nonatomic) long long libraTreatmentID;
@property (retain, nonatomic) NSString *scene;
@property (retain, nonatomic) NSDictionary *reportConfigDic;
@property (retain, nonatomic) IEFFeatureCenterConfig *predictConfig;
@property (retain, nonatomic) IEFFeatureCenterConfig *realConfig;

- (void).cxx_destruct;

@end
