@class NSString;
@protocol AWEAwemeBizPlayVideoProtocol, AFDRichContentContainerViewControllerProtocol, AWEKnowledgePlayResultControlProtocol, AWEKnowledgeAudioControlProtocol;

@interface AWEKnowledgePlayStateResultHandler : NSObject <AWEKnowledgeStateResultHandlerProtocol>

@property (weak, nonatomic) id<AFDRichContentContainerViewControllerProtocol, AWEAwemeBizPlayVideoProtocol, AWEKnowledgePlayResultControlProtocol> playControl;
@property (weak, nonatomic) id<AWEKnowledgeAudioControlProtocol> audioControl;
@property (nonatomic) BOOL isPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableHandleObject:(id)a0;

- (BOOL)registerObject:(id)a0;
- (void)changeMuteState:(BOOL)a0 forReason:(id)a1;
- (void)card:(id)a0 didUpdateStateAtScene:(id)a1 withParam:(id)a2 actionType:(id)a3 oldInfo:(id)a4 withCompletion:(id /* block */)a5;
- (void)quickStartCompletion:(id /* block */)a0;
- (void)unregisterObject;
- (void).cxx_destruct;

@end
