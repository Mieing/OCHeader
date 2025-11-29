@class NSString, NSArray;

@interface IESLiveRevenueCurrentPanelEffectsDataModel : IESLiveBridgeModel

@property (copy, nonatomic) NSString *panelName;
@property (copy, nonatomic) NSArray *effectList;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
