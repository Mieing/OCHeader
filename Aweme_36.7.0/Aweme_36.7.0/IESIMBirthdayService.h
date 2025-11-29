@class NSString;

@interface IESIMBirthdayService : HTSService <IESIMBirthdayService, AWEPublishTaskMessage>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)a0 willAppendWithInfo:(id)a1;
- (id)generateWithPrefix:(id)a0 andSuffix:(id)a1;
- (void)fetchBirthdayEffectCompletion:(id /* block */)a0;
- (void)showBirthdayEffectEditViewWithEffects:(id)a0 currentEffect:(id)a1 forUser:(id)a2 inConversation:(id)a3;
- (id)init;
- (void)dealloc;

@end
