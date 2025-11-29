@class NSString, UILabel, AWEIMTaskDetailistSectionFooterView, UIButton;

@interface AWEIMTaskPlatformDetailCardDetailActivityCellFooterView : UIView <AWEIMRendererProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) id model;
@property (retain, nonatomic) AWEIMTaskDetailistSectionFooterView *footerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)renderModel:(id)a0 context:(id)a1;
- (void)handleTapRightButton;
- (void)handleTapLeftButton;
- (id)__bgColorForButtonModel:(id)a0;
- (id)__textColorForButtonModel:(id)a0;
- (id)attrWithHighlightStr:(id)a0 fulltext:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
