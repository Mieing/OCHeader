@class NSString, UIImageView, MMUIView, WCFinderPostModifyModel, RichTextView;
@protocol WCFinderModifiedLogBannerViewDelegate;

@interface WCFinderModifiedLogBannerView : MMUIView <ILinkEventExt>

@property (retain, nonatomic) WCFinderPostModifyModel *modifyModel;
@property (retain, nonatomic) RichTextView *fromTextView;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) RichTextView *toTextView;
@property (retain, nonatomic) MMUIView *deleteBtn;
@property (weak, nonatomic) id<WCFinderModifiedLogBannerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 model:(id)a1;
- (void)setUpUI;
- (void)layoutAllSubviews;
- (void)onClickDeleteBtn;
- (void)onTextClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 withView:(id)a2;
- (void).cxx_destruct;

@end
