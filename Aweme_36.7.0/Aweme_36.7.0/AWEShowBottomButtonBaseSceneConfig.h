@class NSString;
@protocol AWEShowBottomButtonPluginHubProtocol;

@interface AWEShowBottomButtonBaseSceneConfig : NSObject <AWEShowBottomButtonSceneConfigPluginProtocol>

@property (weak, nonatomic) id<AWEShowBottomButtonPluginHubProtocol> hub;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHub:(id)a0;
- (void).cxx_destruct;

@end
