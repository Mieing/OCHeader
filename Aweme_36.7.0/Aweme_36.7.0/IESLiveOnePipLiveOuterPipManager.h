@class NSString, IESLiveOnePipAVPiPManager, UIViewController;

@interface IESLiveOnePipLiveOuterPipManager : NSObject <IESLiveOuterPipProvider>

@property (retain, nonatomic) IESLiveOnePipAVPiPManager *avPipManager;
@property (retain, nonatomic) UIViewController *returnToVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isShowingPip;
- (void)clearWithCallTrace:(id)a0;
- (void)updateReturnVCWithNewReturnVC:(id)a0;
- (void)showPipWithPipModel:(id)a0 callTrace:(id)a1;
- (void)hidePipWithPipModel:(id)a0 callTrace:(id)a1;
- (BOOL)isShowingPipWithManagerType:(unsigned long long)a0;
- (void)updatePipModel:(id)a0 callTrace:(id)a1;
- (void)hidePipWithWithType:(long long)a0 callTrace:(id)a1 completion:(id /* block */)a2;
- (void)clearPipModel:(id)a0 callTrace:(id)a1;
- (void)setIsForbidShow:(BOOL)a0 changeType:(long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
