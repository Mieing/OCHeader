@class UITapGestureRecognizer, NSArray, NSString, NSMutableSet, AWEProfileHeaderContext, UIButton;
@protocol AWEProfileHeaderAgeAndLocationCollectionViewCellDelegate;

@interface AWEProfileHeaderAgeAndLocationCollectionViewCell : UICollectionViewCell <AWEProfileHeaderCellProtocol>

@property (retain, nonatomic) UIButton *genderAndAgeButton;
@property (retain, nonatomic) UIButton *locationBtn;
@property (retain, nonatomic) UIButton *ipLocationBtn;
@property (retain, nonatomic) UIButton *realNameBtn;
@property (retain, nonatomic) UIButton *jobNameBtn;
@property (retain, nonatomic) UIButton *schoolBtn;
@property (retain, nonatomic) UIButton *unknownButton;
@property (retain, nonatomic) UIButton *moreButton;
@property (nonatomic) BOOL moreButtonClicked;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (copy, nonatomic) NSArray *personalTagList;
@property (nonatomic) double currentPointY;
@property (copy, nonatomic) NSString *unknownTitle;
@property (retain, nonatomic) NSMutableSet *trackedShowType;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (weak, nonatomic) id<AWEProfileHeaderAgeAndLocationCollectionViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onPersonalRecommendChanged:(BOOL)a0;
- (void)schoolStoryDidUpdatedUserSetting:(BOOL)a0;
- (void)p_setupInfoButton:(id)a0;
- (id)padService;
- (id)scaleToSize:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)onTapGestureAction:(id)a0;
- (BOOL)isSame:(id)a0 with:(id)a1 context:(id)a2;
- (void)configBtnsInNewLineStyle:(id)a0;
- (void)p_updateSchoolStoryBtnUI;
- (BOOL)p_isSchoolStoryEnabled;
- (void)refreshPointX:(double *)a0 pointY:(double *)a1 btnWidth:(double)a2 btnHeight:(double)a3 containerWidth:(double)a4 isLastBtn:(BOOL)a5;
- (void)addAccessViewToButton:(id)a0;
- (void)trackTagShowIfNeedWithModel:(id)a0 showText:(id)a1;
- (id)p_unknownInfoString:(id)a0;
- (id)personalTagModelWithType:(unsigned long long)a0;
- (BOOL)enablePersonalTagRefactor;
- (void)setButtonImageWithModel:(id)a0 button:(id)a1;
- (BOOL)enableMoreBtnPositionOptimize;
- (id)__defaultBtnImage;
- (void)handleTapGestureWithLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)configWithHeaderContext:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
