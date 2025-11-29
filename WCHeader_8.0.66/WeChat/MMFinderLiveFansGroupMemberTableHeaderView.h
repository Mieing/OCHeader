@class NSString, UIImageView, RichTextView, MMUILabel;

@interface MMFinderLiveFansGroupMemberTableHeaderView : UIView <ILinkEventExt>

@property (retain, nonatomic) MMUILabel *fansGroupNameTipLabel;
@property (retain, nonatomic) MMUILabel *fansGroupNameLabel;
@property (retain, nonatomic) RichTextView *superfanTipLabel;
@property (retain, nonatomic) UIImageView *superfanWingsImageView;
@property (nonatomic) BOOL showSuperfanTip;
@property (nonatomic) BOOL showSuperfanWingsImage;
@property (copy, nonatomic) id /* block */ enableSuperfanCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)contentTopMargin;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutFansGroupNameTipLabel;
- (void)layoutFansGroupNameLabel;
- (void)layoutSuperfanTipLabel;
- (void)layoutSuperfanWingsImageView;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
