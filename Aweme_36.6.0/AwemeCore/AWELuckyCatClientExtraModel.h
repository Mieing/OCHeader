@class NSString, AWELuckyCatStageContentModel;

@interface AWELuckyCatClientExtraModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELuckyCatStageContentModel *stageOne;
@property (retain, nonatomic) AWELuckyCatStageContentModel *stageTwo;
@property (retain, nonatomic) AWELuckyCatStageContentModel *stageThree;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
