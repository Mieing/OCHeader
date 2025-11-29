@class YataRenderNode, NSString, YataProtocolModel, UIView;
@protocol YataInstanceInnerInterface;

@interface YataEventTriggerContext : NSObject <NSCopying>

@property (nonatomic) long long triggerSource;
@property (copy, nonatomic) NSString *triggerID;
@property (nonatomic) double beginTimestamp;
@property (copy, nonatomic) NSString *eventTrigger;
@property (weak, nonatomic) UIView *activeView;
@property (weak, nonatomic) id<YataInstanceInnerInterface> yataInstance;
@property (retain, nonatomic) YataProtocolModel *cachedProtocol;
@property (weak, nonatomic) YataRenderNode *renderNode;

- (BOOL)isEventExecEnvValid;
- (id)initWithTriggerSource:(long long)a0 renderNode:(id)a1 activeView:(id)a2 cachedProtocol:(id)a3 yataInstance:(id)a4 trigger:(id)a5;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
