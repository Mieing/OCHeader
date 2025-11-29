@class NSString;

@interface AWESceneTrackTriggerManager : HTSService <AWESceneTrackTriggerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)evaluatorConditionsWithModel:(id)a0 params:(id)a1;
- (id)processTrackConditionDict:(id)a0;

@end
