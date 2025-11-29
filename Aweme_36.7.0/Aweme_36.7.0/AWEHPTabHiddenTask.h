@class NSString;

@interface AWEHPTabHiddenTask : AWEHPBaseUIControlTask <AWEHPTabHiddenTaskProtocol>

@property (nonatomic) BOOL hidden;
@property (readonly, nonatomic) BOOL isActivated;
@property (readonly, nonatomic) BOOL inEffect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)deactivateTask;
- (void)activateTask;
- (void)updateHidden:(BOOL)a0;
- (id)initWithConfig:(id)a0;

@end
