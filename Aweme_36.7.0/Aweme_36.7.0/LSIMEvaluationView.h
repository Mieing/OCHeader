@class UIStackView, NSString, NSArray, LSIMEvaluationResult, LSIMTagsView, LSIMImageTextVerticalView, LSIMTextArea, LSIMEvaluationInfo, UILabel, LSIMTagModel;
@protocol LSIMEvaluationViewDelegate;

@interface LSIMEvaluationView : UIView <LSIMImageTextVerticalViewDelegate, LSIMTagsViewDataSource, LSIMTagsViewDelegate>

@property (retain, nonatomic) LSIMEvaluationInfo *info;
@property (retain, nonatomic) LSIMEvaluationResult *messageResult;
@property (retain, nonatomic) LSIMEvaluationResult *commitResult;
@property (retain, nonatomic) LSIMEvaluationResult *lastResult;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *contentStackView;
@property (retain, nonatomic) UIStackView *mainRatingStackView;
@property (copy, nonatomic) NSArray *mainRatingButtons;
@property (retain, nonatomic) LSIMTagsView *tagsView;
@property (retain, nonatomic) LSIMTextArea *inputView;
@property (weak, nonatomic) LSIMImageTextVerticalView *currentSelectedRatingButton;
@property (retain, nonatomic) NSArray *currentTagModels;
@property (retain, nonatomic) LSIMTagModel *remarkTagModel;
@property (nonatomic) long long currentFixedMark;
@property (nonatomic) BOOL firstAdjustMessageResult;
@property (nonatomic) BOOL isAdjustingResult;
@property (nonatomic) BOOL isClearingContent;
@property (weak, nonatomic) id<LSIMEvaluationViewDelegate> delegate;
@property (nonatomic) BOOL disableEvaluation;
@property (nonatomic) double createTime;
@property (readonly, nonatomic) LSIMEvaluationResult *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)evaluationViewTapped:(id)a0;
- (void)notifyHeightChanged;
- (void)adjustResult:(id)a0;
- (void)verticalButtonDidTapped:(id)a0;
- (void)adjustTagItem:(id)a0 index:(unsigned long long)a1;
- (BOOL)checkCanChangeResult:(BOOL)a0;
- (void)updateTagsViewWithIndex:(unsigned long long)a0;
- (void)updateEvaluationResult:(BOOL)a0;
- (id)tagsViewItems;
- (void)tagItemDidTapped:(id)a0 index:(unsigned long long)a1;
- (id)initWithEvaluationInfo:(id)a0;
- (void)setEvaluationInfo:(id)a0;
- (void)disabledByShowedExpiration;
- (void)adjustResultFromMessage:(id)a0 commitResult:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)clearContent;
- (void)setupView;

@end
