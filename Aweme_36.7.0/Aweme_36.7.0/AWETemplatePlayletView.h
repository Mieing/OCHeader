@class UIView, AWETemplateBarModel, NSString, UIImageView, AWECodeGenSeriesBarTagInfoModel, DUXButton, UILabel, AWETemplateBarContext;
@protocol AWETemplateViewActionProtocol;

@interface AWETemplatePlayletView : UIView <AWETemplateViewProtocol>

@property (retain, nonatomic) AWETemplateBarModel *currentModel;
@property (retain, nonatomic) AWETemplateBarContext *barContext;
@property (retain, nonatomic) AWECodeGenSeriesBarTagInfoModel *tagModel;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *headerIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UILabel *mainContentLabel;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UILabel *subContentLabel;
@property (retain, nonatomic) UIImageView *tailImageView;
@property (retain, nonatomic) DUXButton *nextButton;
@property (retain, nonatomic) NSString *nextBtnText;
@property (retain, nonatomic) NSString *activeText;
@property (retain, nonatomic) UIView *countDownContainerView;
@property (retain, nonatomic) UILabel *countDownLabel;
@property (nonatomic) BOOL useNewStyle;
@property (weak, nonatomic) id<AWETemplateViewActionProtocol> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateSubContent:(id)a0;
- (void)resetNextButton;
- (void)highlightNextButton;
- (void)tryLayout;
- (void)configSubviews;
- (id)contentFont;
- (void)didClickCommonView;
- (BOOL)enableAdaptLargeFontModeV3;
- (void)parseTagModel;
- (void)updateSubContentForNewStyleWithContent:(id)a0;
- (void)updateSubContentForDefaultStyleWithContent:(id)a0;
- (BOOL)subContentLabelNeedsShow;
- (void)addNextButtonIfNeeded;
- (void)updateLayoutForNewStyle;
- (void)updateLayoutForDefaultStyle;
- (void)didClickNextButton;
- (void)addSubViews;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 context:(id)a1;
- (id)initWithData:(id)a0;
- (void)updateWithData:(id)a0;
- (void)reset;
- (id)buttonFont;
- (void)setContentInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setNextButtonText:(id)a0;

@end
