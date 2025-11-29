@class NSString;

@interface IESIMFlowService : HTSService <IESIMFlowService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enableFlowInAwemeIM;
- (BOOL)enableFlowShareEntrance;

@end
