@class CAGradientLayer, NSString, ChatBotPrologueMsgDataSource, MMTableView;
@protocol ChatBotPrologueMsgListViewDelegate;

@interface ChatBotPrologueMsgListView : UIView <ChatBotPrologueMsgDataSourceDelegate>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) ChatBotPrologueMsgDataSource *dataSource;
@property (retain, nonatomic) CAGradientLayer *topGradientMaskLayer;
@property (retain, nonatomic) CAGradientLayer *bottomGradientMaskLayer;
@property (weak, nonatomic) id<ChatBotPrologueMsgListViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)layoutContentViews;
- (void)layoutTableView;
- (void)addGradientMask;
- (void)updateBottomMaskColor:(id)a0;
- (void)updateTopMaskColor:(id)a0;
- (void)updateWithPrologueMsgList:(id)a0;
- (void)onPrologueMsgListDataFirstLoadComplete;
- (void).cxx_destruct;

@end
