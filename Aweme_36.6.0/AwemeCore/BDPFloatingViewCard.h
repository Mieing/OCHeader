@class NSString, UIImageView, NSTimer, UILabel, BDPUniqueID;

@interface BDPFloatingViewCard : UIView

@property (nonatomic) double timeout;
@property (nonatomic) long long pageID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *schemaRoute;
@property (copy, nonatomic) NSString *leftIconName;
@property (copy, nonatomic) NSString *rightIconName;
@property (copy, nonatomic) NSString *componentID;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *leftIconView;
@property (retain, nonatomic) UIImageView *rightIconView;
@property (retain, nonatomic) NSTimer *dismissTimer;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) long long type;
@property (copy, nonatomic) id /* block */ BDPFloatingCardDismissCallback;

- (void)setUpCardTypeWithType:(id)a0;
- (void)setUpElements;
- (void)setUpFloatingCardContainer;
- (void)setupIconViewsWithisLeftIcon:(BOOL)a0 width:(double)a1 height:(double)a2 topAnchorConstant:(double)a3 sideAnchorConstant:(double)a4;
- (void)setUpDismissTimer;
- (id)getLiveReservationTapGesture;
- (void)onTapOpenLiveReservationPage:(id)a0;
- (void)fireOnJumpIntoReservationWithData:(id)a0;
- (void)subscribeHandler:(id)a0 data:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 pageID:(long long)a1 schema:(id)a2 cardType:(id)a3 componentID:(id)a4 uniqueID:(id)a5;
- (void).cxx_destruct;
- (void)invalidateTimer;
- (void)setupTitle;

@end
