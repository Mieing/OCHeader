@class WCFinderTemplateCommentArrowButton, NSString, UIImageView, WCFinderFeedContentTouchExpandTextView;
@protocol WCFinderTemplateVideoCommentView;

@interface WCFinderTemplateVideoCommentView : MMUIView <WCFinderFeedContentTextClickActionDelegate>

@property (retain, nonatomic) WCFinderFeedContentTouchExpandTextView *textView;
@property (retain, nonatomic) UIImageView *imgView;
@property (retain, nonatomic) UIImageView *playIconView;
@property (retain, nonatomic) WCFinderTemplateCommentArrowButton *cutSameVideoBtn;
@property (nonatomic) unsigned long long commentType;
@property (weak, nonatomic) id<WCFinderTemplateVideoCommentView> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightWithComment:(id)a0 width:(double)a1 forceExpand:(BOOL)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (double)updateWithComment:(id)a0 isAuthor:(BOOL)a1;
- (void)updateCutSameBtnStyleByComment:(id)a0;
- (void)onClickPreviewView;
- (void)onClickCutSameBtn;
- (void)onFeedContentTextView:(id)a0 clickReadMore:(BOOL)a1;
- (void).cxx_destruct;

@end
