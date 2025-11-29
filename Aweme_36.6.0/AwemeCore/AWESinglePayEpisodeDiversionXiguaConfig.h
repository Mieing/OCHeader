@class AWESinglePayEpisodeDiverSionXiguaSceneControl, AWESinglePayEpisodeDiversionXiguaFrequencyControl, NSString;

@interface AWESinglePayEpisodeDiversionXiguaConfig : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) AWESinglePayEpisodeDiverSionXiguaSceneControl *sceneControl;
@property (retain, nonatomic) AWESinglePayEpisodeDiversionXiguaFrequencyControl *frequencyControl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
