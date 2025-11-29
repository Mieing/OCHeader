@class NSString, IESECMallMultiTabItem, NSDictionary;
@protocol IESECMallPerfService, IESECMallMultiContextService, IESECMallTabFrameService;

@interface IESECMallChannelConfig : NSObject <IESECMallChannelConfigProtocol>

@property (copy, nonatomic) NSString *containerReferString;
@property (copy, nonatomic) NSString *envID;
@property (copy, nonatomic) NSString *ecomSceneID;
@property (retain, nonatomic) IESECMallMultiTabItem *tabInfo;
@property (copy, nonatomic) NSDictionary *originData;
@property (copy, nonatomic) NSDictionary *multiTabConfig;
@property (nonatomic) long long index;
@property (nonatomic) double topSafeMargin;
@property (nonatomic) BOOL isPromotion;
@property (copy, nonatomic) NSString *preferredThemeStyle;
@property (nonatomic) long long tabContainerType;
@property (weak, nonatomic) id<IESECMallMultiContextService> containerContextAbility;
@property (weak, nonatomic) id<IESECMallPerfService> perfMonitorAbility;
@property (weak, nonatomic) id<IESECMallTabFrameService> frameServiceAbility;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;

@end
