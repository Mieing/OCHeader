@class NSString, AWEIncentiveDYPendantConfModel, AWEIncentiveDYFreqSceneConfigModel;

@interface AWEIncentiveDYFeedVVItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *awemeId;
@property (nonatomic) long long scene;
@property (retain, nonatomic) AWEIncentiveDYFreqSceneConfigModel *sceneFreqConf;
@property (copy, nonatomic) NSString *sceneKey;
@property (retain, nonatomic) AWEIncentiveDYPendantConfModel *pendant;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
