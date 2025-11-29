@class NSString, AWETeenExtraParamModel;
@protocol AWETeenGeneralCardDelegate;

@interface AWETeenGeneralBaseSectionController : IGListSectionController <IGListSupplementaryViewSource, AWETeenGeneralCardProtocol, AWETeenGeneralCellInteractionDelegate>

@property (nonatomic) BOOL shouldShowFooter;
@property (retain, nonatomic) AWETeenExtraParamModel *extraParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWETeenGeneralCardDelegate> cardDelegate;

- (double)currPlaybackTime;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (BOOL)playEnable;
- (id)visibleVideoControllers;
- (void)cardShow;
- (void)cellShow:(id)a0 atIndex:(long long)a1;
- (void)didClickVideoWithAwemeModel:(id)a0;
- (void)interactionView:(id)a0 didClickPlayButton:(BOOL)a1;
- (void)didDoubleClickVideoWithAwemeModel:(id)a0 isCancel:(BOOL)a1;
- (void)didBecomeActive;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (id)init;
- (BOOL)canPlay;
- (void)reset;
- (void)seekToTime:(double)a0;
- (void)didResignActive;

@end
