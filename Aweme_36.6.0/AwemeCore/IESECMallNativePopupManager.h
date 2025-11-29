@class NSDictionary, NSString;
@protocol IESECMallNativePopupManagerDelegate;

@interface IESECMallNativePopupManager : NSObject

@property (copy, nonatomic) NSDictionary *openPopupByNativeConfig;
@property (copy, nonatomic) NSDictionary *popupData;
@property (weak, nonatomic) id<IESECMallNativePopupManagerDelegate> delegate;
@property (nonatomic) BOOL isGuideScene;
@property (nonatomic) BOOL isMallVisible;
@property (nonatomic) BOOL firstScreenDidShow;
@property (copy, nonatomic) NSString *pageName;
@property (copy, nonatomic) NSString *openTime;
@property (nonatomic) double disappearTime;
@property (nonatomic) long long nativeType;
@property (nonatomic) double deviceScore;
@property (nonatomic) double handleDataStartTime;
@property (nonatomic) double handleDataEndTime;
@property (nonatomic) double handlePopupTime;
@property (readonly, copy, nonatomic) NSDictionary *openPopupByNativeResult;
@property (nonatomic) BOOL isFirstLaunch;
@property (copy, nonatomic) NSString *launchMode;

- (id)getOpenPopupByNativeResult;
- (id)initWithPopup:(id)a0 openPopupByNativeConfig:(id)a1;
- (BOOL)isToastTypePopup:(id)a0;
- (void)reportPopupResult:(BOOL)a0 mallPopup:(id)a1 breakReason:(id)a2 timeParams:(id)a3;
- (id)buildTaskConfig:(id)a0 ecomSceneId:(id)a1 popupExtra:(id)a2;
- (void).cxx_destruct;

@end
