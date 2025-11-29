@class IESLivePlaceholderTextView, NSString, NSArray, IESLiveGuideContentPanelModel, UIView;
@protocol IESLiveGuideTitleView, IESLiveTextCorrection, IESLiveGuideTitleHandlerDelegate;

@interface IESLiveGuideTitleOptHandler : NSObject <UITextViewDelegate, IESLiveGuideTitleHandlerDelegate, IESLiveGuideTitleEditPanelDatasource, IESLiveGuideTitleHandlerProtocol>

@property (retain, nonatomic) IESLivePlaceholderTextView *liveTitleTextView;
@property (retain, nonatomic) IESLiveGuideContentPanelModel *viewModel;
@property (retain, nonatomic) id<IESLiveTextCorrection> textCorrection;
@property (retain, nonatomic) NSString *disableEditTitleToast;
@property (copy, nonatomic) NSArray *aiTitles;
@property (nonatomic) long long selectedAiTitleIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL useNewStyle;
@property (retain, nonatomic) UIView<IESLiveGuideTitleView> *liveTitleView;
@property (retain, nonatomic) NSString *roomTitle;
@property (weak, nonatomic) id<IESLiveGuideTitleHandlerDelegate> delegate;

- (long long)titleLengthLimit;
- (void)textFiledEditChanged:(id)a0;
- (struct CGSize { double x0; double x1; })titleTextSize;
- (void)updateWithOpenLiveModel:(id)a0;
- (void)tapOnDisableEditStatus:(id)a0;
- (long long)getTitleLengthLimit;
- (id)titlesData;
- (void)showAITitleEditPanel;
- (void)checkMediaTitle:(id)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;

@end
