@interface AWEVoipBaseOperation : NSObject

@property (nonatomic) long long enterFrom;
@property (nonatomic) unsigned long long interactionAction;
@property (nonatomic) long long initialActions;

- (long long)awe_voipInitialActions;

@end
