@class NSString, AWEIncentiveDYFreqSceneConfigModel;

@interface AWEIncentiveDYFreqConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long showTime;
@property (retain, nonatomic) AWEIncentiveDYFreqSceneConfigModel *sameScene;
@property (retain, nonatomic) AWEIncentiveDYFreqSceneConfigModel *totalScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
