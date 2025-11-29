@class NSString, ACCChapterInputView, UIView;
@protocol ACCChapterInputControllerDelegate;

@interface ACCChapterInputController : NSObject <ACCChapterInputViewDelegate>

@property (retain, nonatomic) ACCChapterInputView *textView;
@property (nonatomic) long long timestamp;
@property (retain, nonatomic) UIView *spaceView;
@property (weak, nonatomic) id<ACCChapterInputControllerDelegate> delegate;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isSpaceClose;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)chapterInputViewReachMax;
- (void)spaceViewClick;
- (void)chapterInputViewConfirmText:(id)a0;
- (void)chapterInputViewCancelText:(id)a0;
- (void)chapterEditButtonClickedWithContent:(id)a0 timestamp:(long long)a1;
- (void).cxx_destruct;
- (void)setAttributedPlaceholder:(id)a0;

@end
