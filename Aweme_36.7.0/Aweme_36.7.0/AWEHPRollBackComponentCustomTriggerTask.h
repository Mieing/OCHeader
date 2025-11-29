@class NSString;

@interface AWEHPRollBackComponentCustomTriggerTask : NSObject <AWEHPRollBackComponentCustomTriggerTaskProtocol>

@property (nonatomic) BOOL isValid;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ foldBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)triggerShowCallBack:(BOOL)a0 customConfig:(id)a1;
- (void)triggerDismissWithType:(long long)a0;
- (void)triggerFold;
- (void)close;
- (void).cxx_destruct;
- (id)init;

@end
