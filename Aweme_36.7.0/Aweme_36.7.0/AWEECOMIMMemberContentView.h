@class UIStackView, AWEECOMIMCardComponentSingleIconLabelView, AWEECOMIMCardComponentCommonTitleView, AWEECOMIMSubCardMemberInfoCard, AWEECOMIMMemberRightView, AWEECOMIMCardComponentOperationPanel, AWEECOMIMCardMemberInfoModel;
@protocol AWEECOMIMMemberContentViewDelegate;

@interface AWEECOMIMMemberContentView : UIControl

@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) AWEECOMIMCardComponentCommonTitleView *headerView;
@property (retain, nonatomic) AWEECOMIMSubCardMemberInfoCard *subMemberInfoView;
@property (retain, nonatomic) AWEECOMIMCardComponentSingleIconLabelView *descView;
@property (retain, nonatomic) AWEECOMIMMemberRightView *rightsView;
@property (retain, nonatomic) AWEECOMIMCardComponentOperationPanel *btnPanel;
@property (retain, nonatomic) AWEECOMIMCardMemberInfoModel *memberModel;
@property (weak, nonatomic) id<AWEECOMIMMemberContentViewDelegate> delegate;

+ (double)heightWithWidth:(double)a0 cardPaddings:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 memberModel:(id)a2;

- (void)bindMemberInfoModel:(id)a0;
- (void)memberContentViewDidClick;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;

@end
