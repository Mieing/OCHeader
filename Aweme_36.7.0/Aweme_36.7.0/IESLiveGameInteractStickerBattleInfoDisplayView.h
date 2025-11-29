@class NSString, IESLiveGameInteractStickerBattleLiveInfoDisplayView, IESLiveGameInteractStickerBattleRoleInfoDisplayView, IESLiveGameInteractStickerModel, UIView, NSNumber, IESLiveGameInteractStickerBattleInfoRollingView;

@interface IESLiveGameInteractStickerBattleInfoDisplayView : UIView <IESLiveGameInteractStickerDisplayViewProtocol>

@property (retain, nonatomic) IESLiveGameInteractStickerModel *stickerModel;
@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESLiveGameInteractStickerBattleLiveInfoDisplayView *liveInfoDisplayView;
@property (nonatomic) BOOL isKeepLiveInfo;
@property (retain, nonatomic) IESLiveGameInteractStickerModel *tempStickerModel;
@property (retain, nonatomic) IESLiveGameInteractStickerBattleRoleInfoDisplayView *roleInfoDisplayView;
@property (retain, nonatomic) IESLiveGameInteractStickerBattleInfoRollingView *battleRollingView;
@property (nonatomic) double loadTime;
@property (copy, nonatomic) id /* block */ didLoadFinishedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)scaleRatio;
- (void)updateSubViews;
- (void)updateStickerModel:(id)a0;
- (void)setupBackgroundColor;
- (void)setupLiveInfoView;
- (void)callLoadFinishedBlock:(BOOL)a0 error:(id)a1 isFirstCreate:(BOOL)a2;
- (id)battleModel;
- (void)rollingToBattleInfo;
- (void)setupBattleRollingView;
- (void)rollingToLiveInfo;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stickerModel:(id)a1 roomID:(id)a2 context:(id)a3 didLoadFinishedBlock:(id /* block */)a4;
- (long long)getReuseID;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
