@class NSArray, NSDictionary, IESECLiveListABConfigModel, IESECLiveActionQualityTrackModuleInfo, IESECLivePromotionCardBTMModel;

@interface IESECLivePromotionCardConfigModel : NSObject

@property (nonatomic) BOOL useV2;
@property (retain, nonatomic) NSDictionary *UIConfig;
@property (retain, nonatomic) NSArray *elementLayoutArray;
@property (retain, nonatomic) IESECLivePromotionCardBTMModel *BTMModel;
@property (nonatomic) long long cardScene;
@property (retain, nonatomic) IESECLiveListABConfigModel *abConfig;
@property (retain, nonatomic) IESECLiveActionQualityTrackModuleInfo *qualityTrackModuleInfo;

- (void).cxx_destruct;

@end
