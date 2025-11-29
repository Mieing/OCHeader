@class NSString, IESLivePlaceholderTextView, IESLiveGuideModel;
@protocol IESLiveGuideDailyTitleViewDelegate;

@interface IESLiveGuideDailyTitleView : UIView <UITextViewDelegate>

@property (retain, nonatomic) IESLivePlaceholderTextView *liveTitleTextView;
@property (retain, nonatomic) NSString *disableEditTitleToast;
@property (retain, nonatomic) IESLiveGuideModel *guideModel;
@property (retain, nonatomic) NSString *roomTitle;
@property (weak, nonatomic) id<IESLiveGuideDailyTitleViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGuideModel:(id)a0;
- (void)updateDisableEditTitle;
- (void)setupLiveTitle;
- (void)tapOnDisableEditStatus:(id)a0;
- (long long)getTitleLengthLimit;
- (void).cxx_destruct;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)textViewDidBeginEditing:(id)a0;
- (void)textViewDidEndEditing:(id)a0;
- (void)textViewDidChange:(id)a0;
- (BOOL)textView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setupViews;

@end
