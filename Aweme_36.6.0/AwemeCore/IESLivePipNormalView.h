@class NSString, UIImageView, NSTimer, UILabel, UIView;
@protocol IESLiveRoomService, HTSLiveStreamPlayerProvider, IESLivePipViewDelegate;

@interface IESLivePipNormalView : UIView <IESLivePipViewService, IESLiveSmallWindowContainerSubViewProtocol>

@property (weak, nonatomic) id<HTSLiveStreamPlayerProvider> streamPlayerProvider;
@property (retain, nonatomic) UIImageView *closeIcon;
@property (retain, nonatomic) UIView *infoContainerView;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) NSTimer *waitToLotteryTimer;
@property (retain, nonatomic) NSTimer *waitToHideHighLightTimer;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (copy, nonatomic) NSString *originSdkkey;
@property (nonatomic) BOOL fromOutPip;
@property (weak, nonatomic) id<IESLivePipViewDelegate> delegate;
@property (nonatomic) BOOL enableAttach;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)detachOutPipWindowView;
- (BOOL)isVRMode;
- (void)didTapClose;
- (BOOL)enableAttachScreenWhenGestureCancelled;
- (void)attachWindow;
- (id)extraParamForTrackType:(unsigned long long)a0 entranceTypeIfNeeded:(unsigned long long)a1 closeWithHideTypeIfNeeded:(long long)a2;
- (void)didTapEnterRoom;
- (void)updateInfoState:(long long)a0 countDownDurationOfCurrentVote:(long long)a1;
- (void)updateInfoText:(id)a0;
- (id)getCurrentLowestLevelResolutionKey;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)updateWithModel:(id)a0;

@end
