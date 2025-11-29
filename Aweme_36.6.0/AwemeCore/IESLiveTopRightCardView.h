@class HTSLiveCommonCardArea, IESLiveTopRightAirView, NSString, IESLiveTopRightSliceView, UIView, IESLiveRightTopMutuallyExclusiveItem;
@protocol IESLiveRoomService, IESHYContainerProtocol, IESLiveTopRightCardViewDelegate;

@interface IESLiveTopRightCardView : UIView <IESHYHybridViewLifecycleProtocol, HTSLivePluginLayoutView>

@property (retain, nonatomic) HTSLiveCommonCardArea *cardArea;
@property (retain, nonatomic) UIView<IESHYContainerProtocol> *hybridView;
@property (retain, nonatomic) IESLiveTopRightSliceView *sliceView;
@property (retain, nonatomic) IESLiveTopRightAirView *airView;
@property (retain, nonatomic) IESLiveRightTopMutuallyExclusiveItem *rightTopItem;
@property (nonatomic) struct CGSize { double width; double height; } cardSize;
@property (nonatomic) int cardId;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (weak, nonatomic) id<IESLiveTopRightCardViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)refreshData:(id)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)registerJSB;
- (id)initWithCardArea:(id)a0;
- (id)queryURLWithString;
- (void)didClosedView:(long long)a0;
- (void)setupAccessibilityName;
- (void)renderUseHybrid;
- (void)renderUseDSL;
- (void)renderUseLynxAir;
- (void)didShowedView;
- (void)closeCardView;
- (void)renderCardView;
- (void)showCardView;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)viewType;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;

@end
