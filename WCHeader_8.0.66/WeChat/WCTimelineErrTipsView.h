@class NSString, UIImageView, RichTextView, WCMomentsErrTipsViewModel;
@protocol WCTimelineErrTipsViewDelegate;

@interface WCTimelineErrTipsView : UIButton <ILinkEventExt>

@property (retain, nonatomic) UIImageView *errImageView;
@property (retain, nonatomic) RichTextView *errTipsView;
@property (retain, nonatomic) WCMomentsErrTipsViewModel *viewModel;
@property (weak, nonatomic) id<WCTimelineErrTipsViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForViewModel:(id)a0 width:(double)a1;
+ (double)heightForDataItem:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 viewModel:(id)a1;
- (void)initView;
- (void)updateErrImageView:(unsigned long long)a0;
- (void)updateWithDataItem:(id)a0;
- (id)errTipsAccessibilityText;
- (void)layoutSubviews;
- (void)onLinkClicked:(id)a0 backupUrl:(id)a1 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
