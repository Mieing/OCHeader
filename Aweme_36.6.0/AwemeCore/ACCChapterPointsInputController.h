@class ACCChapterPointsInputView, NSString, UIView;
@protocol ACCChapterPointsInputControllerDelegate;

@interface ACCChapterPointsInputController : NSObject <ACCChapterPointsInputViewDelegate>

@property (retain, nonatomic) ACCChapterPointsInputView *inputView;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) UIView *spaceView;
@property (weak, nonatomic) id<ACCChapterPointsInputControllerDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isSpaceClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)chapterInputViewReachMax;
- (void)spaceViewClick;
- (void)setCorners;
- (void)chapterInputViewAddknowledge;
- (void)chapterInputViewDeleteknowledge;
- (void)willBecomeFirstResponder;
- (void)willResignFirstResponder;
- (void)chapterInputViewConfirmChapter:(id)a0 detail:(id)a1;
- (void)chapterInputViewConfirmAbstract:(id)a0;
- (void)chapterInputViewConfirmDesc:(id)a0 knowledges:(id)a1;
- (void)chapterInputViewCancel;
- (void)chapterButtonClickedWithContent:(id)a0 detail:(id)a1 timestamp:(long long)a2;
- (void)chapterButtonClickedWithContent:(id)a0 knowledges:(id)a1 timestamp:(long long)a2;
- (void)abstractButtonClickWithContent:(id)a0;
- (void).cxx_destruct;

@end
