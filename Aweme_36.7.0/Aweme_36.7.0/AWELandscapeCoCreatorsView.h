@class UIView, AWEAwemeModel, NSArray, NSString, UIImageView, UIButton, AWELandscapeUserView, AWELandscapePageContext, UILabel;
@protocol AWELandscapeCoCreatorsViewDelegate;

@interface AWELandscapeCoCreatorsView : UIView <AWELandscapeUserViewDelegate>

@property (copy, nonatomic) NSArray *coCreatorsArray;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UIButton *backgroundButton;
@property (retain, nonatomic) UIView *userBackgroundView;
@property (retain, nonatomic) UIImageView *coCreatorsImageView;
@property (retain, nonatomic) UILabel *coCreatorsLabel;
@property (retain, nonatomic) AWELandscapeUserView *coCreaterUserView1;
@property (retain, nonatomic) UIView *seperateLineView;
@property (retain, nonatomic) AWELandscapeUserView *coCreaterUserView2;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UILabel *moreLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWELandscapeCoCreatorsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateWithModel:(id)a0 coCreatorsArray:(id)a1;
- (id)initWithPageContext:(id)a0 model:(id)a1;
- (void)landscapePlayerControlCoCreatorButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)moreAction;

@end
