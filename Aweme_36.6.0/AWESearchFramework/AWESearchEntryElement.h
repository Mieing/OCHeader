@class NSArray, NSString, UIImageView, AWEAwemeModel, AWESearchEntryContext, UIView, UIImage;

@interface AWESearchEntryElement : UIView <AWESearchEntryElementProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) UIView *parentView;
@property (retain, nonatomic) AWESearchEntryContext *searchEntryContext;
@property (nonatomic) BOOL hasUpdatedContext;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *preEnterFrom;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL isHalfScreen;
@property (readonly, nonatomic) BOOL isShowing;
@property (copy, nonatomic) id /* block */ didClickBlock;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) long long forcedThemeStyle;
@property (nonatomic) long long controlType;
@property (copy, nonatomic) NSArray *controlList;
@property (nonatomic) BOOL preferCustomLayout;
@property (nonatomic) unsigned long long positionType;
@property (nonatomic) double leftPadding;
@property (nonatomic) double rightPadding;
@property (nonatomic) double topPadding;
@property (nonatomic) double bottomPadding;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } viewFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showOnView:(id)a0;
- (void)showOnView:(id)a0 withAnimationPhase:(long long)a1;
- (void)showOnView:(id)a0 aboveOnSubView:(id)a1 withAnimationPhase:(long long)a2;
- (void)configUI;
- (id)searchEnterFrom;
- (id)currentVideoInfo;
- (void)addGestures;
- (id)extraLogParams;
- (void)gestureTapBeganWithGes:(id)a0 toResult:(BOOL)a1;
- (void)gestureTapCancelWithGes:(id)a0 toResult:(BOOL)a1;
- (void)gestureTapEndWithGes:(id)a0 toResult:(BOOL)a1 needPerfOpt:(BOOL)a2;
- (void)firstUpdateContext:(id)a0 toResult:(BOOL)a1;
- (void)updateContextForGesEnd;
- (BOOL)enableBigMode;
- (BOOL)shouldShowSearchEntry;
- (void)didTappedView:(id)a0;
- (void)willAnimation;
- (void)p_showOnView:(id)a0 aboveOnSubView:(id)a1;
- (void)didAnimation;
- (void)jumpToSearchWithGes:(id)a0 toResult:(BOOL)a1;
- (void)newJumpToSearchWithGes:(id)a0 toResult:(BOOL)a1;
- (id)entranceLog;
- (id)customSchemaParams;
- (BOOL)canAddOnView:(id)a0;
- (id)customSearchEnterFrom;
- (id)customCurrentVideoInfo;
- (id)customExtraLogParams;
- (id)customEntranceLog;
- (void)showOnView:(id)a0 aboveOnSubView:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)updateUI;
- (void)dismissView;
- (void)finishAnimation;
- (void)setupLayout;

@end
