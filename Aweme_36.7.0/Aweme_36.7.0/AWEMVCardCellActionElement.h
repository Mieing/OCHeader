@class AWEMVCardCellElementUIConfig, NSMutableDictionary, UIView, MASConstraint, AWEMVCardCellActionElementViewModel;

@interface AWEMVCardCellActionElement : AWEDCFeedBaseCellElement

@property (retain, nonatomic) NSMutableDictionary *leftResources;
@property (retain, nonatomic) NSMutableDictionary *rightResources;
@property (retain, nonatomic) UIView *rightResourcePlaceView;
@property (retain, nonatomic) UIView *prevRightResourcePlaceView;
@property (retain, nonatomic) UIView *leftResourcePlaceView;
@property (retain, nonatomic) UIView *prevLeftResourcePlaceView;
@property (retain, nonatomic) MASConstraint *leftViewRightConstraint;
@property (nonatomic) BOOL preRightResourcePlaceViewHidden;
@property (retain, nonatomic) AWEMVCardCellActionElementViewModel *viewModel;
@property (retain, nonatomic) AWEMVCardCellElementUIConfig *uiConfig;
@property (nonatomic) BOOL isUIConfigChanged;
@property (nonatomic) unsigned long long prevResourceConstraintsVal;

+ (BOOL)canShowWithAwemeModel:(id)a0 context:(id)a1;
+ (double)heightWithCellWidth:(double)a0 awemeModel:(id)a1 context:(id)a2;
+ (double)lastBottomMargin;
+ (id)elementUIConfigInCardType:(unsigned long long)a0;
+ (double)resourceHeightWithModel:(id)a0;
+ (id)bigCardUIConfig;
+ (id)smallCardUIConfig;
+ (double)bottomMargin;

- (void)configWithModel:(id)a0 context:(id)a1;
- (void)themeDidChange:(long long)a0;
- (void)configResourcePlaceWithModel:(id)a0 context:(id)a1;
- (void)updateHorizontalResourceUIConstraints;
- (void)setupRightResourceWithType:(long long)a0 model:(id)a1;
- (void)setupLeftResourceWithType:(long long)a0 model:(id)a1;
- (void)updateUIConstraintsWithModel:(id)a0;
- (id)createRightResourceForType:(long long)a0 model:(id)a1;
- (void)addInteractionForResource:(id)a0 type:(long long)a1;
- (id)createLeftResourceForType:(long long)a0 model:(id)a1;
- (void)didTapDiggButton:(id)a0;
- (void)didTapUserInfo:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)reset;

@end
