@class NSString, IESLiveGiftDynamicPanelTopModeItem;

@interface IESLiveGiftDynamicPanelTopModeStore : NSObject <IESLiveGiftDynamicPanelTopModeService>

@property (weak, nonatomic) IESLiveGiftDynamicPanelTopModeItem *topModeItem;
@property (retain, nonatomic) id disposeBag;
@property (nonatomic) BOOL currentTopModeCanHide;
@property (nonatomic) unsigned long long currentTopMode;
@property (nonatomic) BOOL isReady;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)updateTopModeItem:(id)a0;
- (void).cxx_destruct;

@end
