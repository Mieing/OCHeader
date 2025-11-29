@class NSString;
@protocol AWENearbyBigCardListCellShrinkProtocol;

@interface AWENearbyBigCardListCellShrinkProtocolAdapter : NSObject <IESLLNearbyBigCardListCellShrinkProtocol>

@property (weak, nonatomic) id<AWENearbyBigCardListCellShrinkProtocol> sourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)panelDidDismiss;
- (void)panelDidPresentWithRemainHeight:(double)a0 animationDuration:(double)a1;
- (void)panelDidPresentWithRemainHeight:(double)a0;
- (void)panelDismissProgressDidChange:(double)a0;
- (void)panelDidDismissWithAnimationDuration:(double)a0;
- (id)getAwemeModel;
- (BOOL)panelPauseVideoIfNeeded;
- (BOOL)panelPlayVideoIfNeeded;
- (void).cxx_destruct;

@end
