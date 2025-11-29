@class NSArray, MMUIActivityIndicatorView, NSMutableArray, MMUILabel;
@protocol ChatBotReCommendMsgViewDelegate;

@interface ChatBotReCommendMsgView : UIView

@property (retain, nonatomic) MMUILabel *titleView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) NSArray *recommendMsgList;
@property (retain, nonatomic) NSMutableArray *msgBtnList;
@property (weak, nonatomic) id<ChatBotReCommendMsgViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateRecommendMsgList:(id)a0;
- (void)layoutContentView;
- (void)layoutTitle;
- (void)layoutLoadingView;
- (void)hideLoadingView;
- (void)layoutMsgs;
- (void)onMsgBtnClick:(id)a0;
- (void).cxx_destruct;

@end
