@class NSString, AWEDetailCellTagLabel, UIImageView, AWEEffectModel, UIView, UILabel, UILongPressGestureRecognizer;
@protocol AWEEffectArtistCellLongPressFunctionDelegate;

@interface AWEEffectArtistFallCardCell : UICollectionViewCell <AFDLongPressDelegateProtocol>

@property (retain, nonatomic) UIView *coverContainerView;
@property (retain, nonatomic) UIImageView *staticCoverImageView;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) AWEDetailCellTagLabel *topLabel;
@property (retain, nonatomic) UILabel *hiddenLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *userCountLabel;
@property (nonatomic) BOOL isMine;
@property (retain, nonatomic) AWEEffectModel *effectModel;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;
@property (copy, nonatomic) NSString *referString;
@property (weak, nonatomic) id<AWEEffectArtistCellLongPressFunctionDelegate> functionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;
+ (struct CGSize { double x0; double x1; })itemSizeWithContainerWidth:(double)a0;
+ (id)identifier;

- (id)aAWEPadModuleAdapter;
- (void)addLongPressGesture;
- (void)showNewPressPanelForScene:(id)a0;
- (void)trackSetPropPageLogExtra:(id)a0 actionType:(id)a1;
- (BOOL)isNewProfileCollectLargeCharacterModeStatus;
- (void)pinToTopCurrentEffectModel;
- (void)hiddenCurrentEffectModel;
- (void)removeEffectCover;
- (void)updateCoverImageView;
- (void)updateTagLabel;
- (void)showLongPressFunctionPanel;
- (void)updateWithModel:(id)a0 isMine:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleLongPressGesture:(id)a0;
- (void)setupUI;

@end
