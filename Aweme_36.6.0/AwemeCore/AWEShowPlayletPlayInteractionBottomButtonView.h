@class NSString, UIImageView, UILabel, UIView, AWECommonButtonInfoModel;

@interface AWEShowPlayletPlayInteractionBottomButtonView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *headerIcon;
@property (retain, nonatomic) UILabel *mainContentLabel;
@property (retain, nonatomic) UILabel *subContentLabel;
@property (retain, nonatomic) UIImageView *tailImageView;
@property (retain, nonatomic) AWECommonButtonInfoModel *infoModel;
@property (retain, nonatomic) NSString *activeText;
@property (copy, nonatomic) id /* block */ selectActionBlock;

- (void)updateSubContent:(id)a0;
- (void)configSubviews;
- (void)didClickCommonView;
- (void)updateMainContent:(id)a0 hideHeaderIcon:(BOOL)a1;
- (void)resetSubContent;
- (id)initWithModel:(id)a0 activeText:(id)a1;
- (void)configMainLabelIfNeedWithUnitModel:(id)a0;
- (void)configSubLabelIfNeedWithUnitModel:(id)a0;
- (void)configTailImageIfNeedWithUrlStr:(id)a0;
- (void)updateSubLabelConstraints;
- (void).cxx_destruct;
- (void)setupSubviews;
- (void)resetContent;

@end
