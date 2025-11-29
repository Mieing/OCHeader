@class UIButton, NSString;
@protocol MMTextFloatBottomToolViewDelegate;

@interface MMTextFloatBottomToolView : WCBottomBar {
    UIButton *m_btnDetail;
    NSString *m_nsTipsUrl;
}

@property (weak, nonatomic) id<MMTextFloatBottomToolViewDelegate> m_delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 TipUrl:(id)a1;
- (void)initSubView;
- (void)layoutSubviews;
- (void)onDetailBtnClicked;
- (void).cxx_destruct;

@end
