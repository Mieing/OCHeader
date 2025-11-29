@class IESLLLiveLynxView, NSString;

@interface IESLLLiveExpoundCardLynxModuleOperator : NSObject

@property (retain, nonatomic) IESLLLiveLynxView *lynxModule;
@property (copy, nonatomic) NSString *processId;
@property (copy, nonatomic) id /* block */ processCompletion;
@property (copy, nonatomic) id /* block */ closeBtnClickedBlock;
@property (copy, nonatomic) id /* block */ buyBtnClickedBlock;
@property (copy, nonatomic) id /* block */ cardClickedBlock;

- (void)sendCardDidAppearEventWithParams:(id)a0;
- (void)sendSeckillCardTrackerEvent;
- (void)sendClickEventWithParams:(id)a0;
- (id)updateGaiaxDataForSpecialSence:(id)a0;
- (id)syncProcessExpoundCardData:(id)a0;
- (void)setupLynxModule;
- (void).cxx_destruct;
- (BOOL)isReady;
- (id)init;
- (void)dealloc;
- (id)moduleVersion;

@end
