@class NSString, NSDictionary, AWEUGShowFreqControlsModel, AWEUndertakeStrategyTrigActionsModel;

@interface AWEUndertakeStrategyDataModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *strategyID;
@property (copy, nonatomic) NSString *strategyType;
@property (retain, nonatomic) AWEUndertakeStrategyTrigActionsModel *triggerActions;
@property (retain, nonatomic) AWEUGShowFreqControlsModel *showFreqControls;
@property (retain, nonatomic) NSDictionary *extraData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)a0;

- (void).cxx_destruct;

@end
