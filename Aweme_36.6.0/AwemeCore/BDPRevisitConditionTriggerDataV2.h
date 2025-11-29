@class NSArray;

@interface BDPRevisitConditionTriggerDataV2 : BDPBasePluginModel

@property (retain, nonatomic) NSArray *allowPage;
@property (nonatomic) BOOL needPhone;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
