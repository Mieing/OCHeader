@class UIView, MMWebImageView, CALayer, UIImageView, UIButton, BTRecommendMsgCellViewModel, RichTextView, MMUILabel;

@interface BTRecommendMsgCellView : BTBaseRecommendAppMsgCellView

@property (retain, nonatomic) MMUILabel *msgTitleLabel;
@property (retain, nonatomic) UIButton *bizContentView;
@property (retain, nonatomic) MMWebImageView *headerView;
@property (retain, nonatomic) MMUILabel *nickNameLabel;
@property (retain, nonatomic) MMUILabel *recommendReasonLabel;
@property (retain, nonatomic) RichTextView *signatureLabel;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIButton *appMsgContentView;
@property (retain, nonatomic) MMUILabel *appMsgRecommendReasonLabel;
@property (retain, nonatomic) RichTextView *appMsgTitleLabel;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) CALayer *bizContentHighlightLayer;
@property (retain, nonatomic) CALayer *appMsgHighlightLayer;
@property (nonatomic) BOOL bizContentKeepHL;
@property (nonatomic) BOOL appMsgKeepHL;
@property (readonly, nonatomic) BTRecommendMsgCellViewModel *viewModel;

- (void)initSubviews;
- (void)onUpdateViewModel;
- (void)initMsgTitleLabel;
- (void)initBizContentView;
- (void)initBizAppMsgViews;
- (unsigned long long)cellRectCorner;
- (void)layoutSubviews;
- (void)makeSafeLabel:(id)a0 fixWidth:(double)a1;
- (void)onClickAppMsgView:(id)a0;
- (void)onJumpToProfile;
- (void)handleLongPressEx:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (void).cxx_destruct;

@end
