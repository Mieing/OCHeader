@class AWEEcommerceSearchLongPressDislikeInfo;
@protocol AWEEcommerceSearchFeedbackPanelProtocol;

@interface AWEEcommerceSearchFeedbackButton : UIButton

@property (retain, nonatomic) AWEEcommerceSearchLongPressDislikeInfo *disLikeInfo;
@property (weak, nonatomic) id<AWEEcommerceSearchFeedbackPanelProtocol> delegate;
@property (nonatomic) BOOL hasSidebar;

- (void)clickFeedbackButton:(id)a0;
- (void)updateWithDisLikeInfo:(id)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })imageRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
