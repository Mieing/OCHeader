@class UIView, MMUIButton, NSString, MMLiveTaskId, UIButton, RichTextView, UILabel, FinderLiveAgreementInfo;
@protocol MMFinderLiveAgreementViewDelegate, ILinkEventExt;

@interface MMFinderLiveAgreementView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate, ILinkEventExt>

@property (retain, nonatomic) MMLiveTaskId *taskId;
@property (nonatomic) BOOL checkBoxSelected;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) MMUIButton *agreementCheckbox;
@property (retain, nonatomic) RichTextView *agreementText;
@property (retain, nonatomic) UIButton *leaveBtn;
@property (retain, nonatomic) UIButton *startBtn;
@property (weak, nonatomic) id<MMFinderLiveAgreementViewDelegate, ILinkEventExt> delegate;
@property (retain, nonatomic) FinderLiveAgreementInfo *agreementInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)setupPageSheetConfig;
- (id)getAgreementText;
- (void)layoutSubviews;
- (void)layoutUI;
- (id)liveTask;
- (void)onCheckBoxClicked;
- (void)onClickedLeave;
- (void)onClickedStart;
- (void)updateAccessbility;
- (void).cxx_destruct;

@end
