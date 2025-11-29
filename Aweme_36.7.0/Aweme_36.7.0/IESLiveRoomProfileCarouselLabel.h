@class NSString, IESLiveRoomProfileCarouselLabelModel, UIImageView, UIView, NSTimer, IESLiveRoomProfileScrollableLabel;

@interface IESLiveRoomProfileCarouselLabel : UIView <IESLiveDynamicViewDelegate>

@property (retain, nonatomic) IESLiveRoomProfileCarouselLabelModel *model;
@property (retain, nonatomic) UIView *infoContainer;
@property (retain, nonatomic) UIView *subInfoContainer;
@property (retain, nonatomic) UIView *thirdInfoContainer;
@property (retain, nonatomic) IESLiveRoomProfileScrollableLabel *infoLabel;
@property (retain, nonatomic) IESLiveRoomProfileScrollableLabel *subInfoLabel;
@property (retain, nonatomic) IESLiveRoomProfileScrollableLabel *thirdInfoLabel;
@property (retain, nonatomic) UIImageView *infoImageView;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isShowSubInfo;
@property (nonatomic) BOOL isShowAuthenticationInfo;
@property (nonatomic) BOOL isDigging;
@property (nonatomic) double animHeight;
@property (retain, nonatomic) IESLiveRoomProfileScrollableLabel *currentLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelWithModel:(id)a0;

- (void)didSetAttachingDIContext;
- (void)startCarousel;
- (void)sizeOfDynamicView:(struct CGSize { double x0; double x1; })a0;
- (void)carouselAnimation;
- (void)addObserber;
- (void)startThreeCarousel;
- (void)trackWithType:(long long)a0 turns:(long long)a1;
- (void)refreshInfoView:(id)a0;
- (void)refreshSubInfoView:(id)a0;
- (void)refreshThirdInfoView:(id)a0;
- (void)replaceAuthenticationWhenDigg:(BOOL)a0;
- (id)getDescStrWithType:(long long)a0;
- (void)refreshView:(id)a0 withInfoType:(long long)a1 str:(id)a2;
- (void)setupSubInfoView;
- (void)setupThirdInfoView;
- (id)createLabelWithInfoType:(long long)a0;
- (void)setupLabelAccessibility:(id)a0 info:(id)a1 infoType:(long long)a2;
- (id)infoViewWithAnchorTabLabel:(id)a0;
- (id)getAccessibilityDescStrWithType:(long long)a0;
- (void)clearAnim;
- (void)disableAnchorNameAccessibility;
- (void)delayTrackTagInfo;
- (void)setupInfoImageConstraints:(double)a0;
- (void)setupSubViews;
- (void).cxx_destruct;
- (void)clearObserver;
- (void)setupInfoView;

@end
