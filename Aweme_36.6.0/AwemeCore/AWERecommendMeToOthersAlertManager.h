@class NSString;

@interface AWERecommendMeToOthersAlertManager : NSObject <AWEPublishTaskMessage, AWERecommendMeToOthersAlertManagerProtocol>

@property (nonatomic) unsigned long long triggerScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)willShowAfterPublish:(id)a0;
+ (void)showWithTrigger:(unsigned long long)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)task:(id)a0 didEndWithResult:(long long)a1 error:(id)a2;
- (void)handleRecommendMeToOthersValueChanged:(id)a0;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
