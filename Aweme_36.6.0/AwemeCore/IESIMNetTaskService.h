@class NSString;

@interface IESIMNetTaskService : HTSService <IESIMNetTaskService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)executeImmediatelyTaskNamed:(id)a0;
- (void)executeImmediatelyTaskAction:(id /* block */)a0 named:(id)a1;
- (void)executeIdleTaskAction:(id /* block */)a0 named:(id)a1;

@end
