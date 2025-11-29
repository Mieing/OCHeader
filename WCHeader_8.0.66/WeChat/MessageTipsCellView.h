@class MMUIActivityIndicatorView, UIImageView, UILabel, MessageTipsViewModel;

@interface MessageTipsCellView : BaseChatCellView <ChatBackgroundExt>

@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) UIImageView *bgImageView;
@property (readonly, nonatomic) MessageTipsViewModel *viewModel;

- (id)initWithViewModel:(id)a0;
- (void)setViewModel:(id)a0;
- (BOOL)canBeReused;
- (void)layoutInternal;
- (void)onAppear;
- (void)layoutLineText;
- (void)layoutLoading;
- (id)lineViewOfWidth:(double)a0;
- (double)maxLabelWidth;
- (void)onChatBackgroundChanged:(id)a0;
- (void).cxx_destruct;

@end
