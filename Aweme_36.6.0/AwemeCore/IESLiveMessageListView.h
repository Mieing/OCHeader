@class CAGradientLayer, NSString, HTSLiveMessageListUnreadTipView, IESLiveMessageListTableView, IESLiveMessageListMoreMessageView;
@protocol IESLiveMessageListLayoutService;

@interface IESLiveMessageListView : UIView <HTSLivePluginLayoutView>

@property (retain, nonatomic) IESLiveMessageListMoreMessageView *moreMessageTipView;
@property (retain, nonatomic) IESLiveMessageListMoreMessageView *noMoreMessageTipView;
@property (nonatomic) BOOL moreMessageTipViewIsShowing;
@property (retain, nonatomic) IESLiveMessageListTableView *tableView;
@property (retain, nonatomic) HTSLiveMessageListUnreadTipView *unreadTipView;
@property (copy, nonatomic) NSString *bizType;
@property (nonatomic) double messageListHeight;
@property (retain, nonatomic) CAGradientLayer *gradientMaskLayer;
@property (copy, nonatomic) id /* block */ reloadDataBlock;
@property (nonatomic) double messageListWidth;
@property (weak, nonatomic) id<IESLiveMessageListLayoutService> layoutService;

- (void)didSetAttachingDIContext;
- (void)showNoMoreMessageTipView;
- (void)adjustNoMoreMessageTipViewAlpha:(double)a0;
- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)setTopMaskHeight:(double)a0;
- (void)removeSeeMoreMessageTipView;
- (void)showSeeMoreMessageTipView;
- (void)dismissNoMoreMessageTipView;
- (void)reloadData;
- (void).cxx_destruct;
- (id)init;
- (id)viewType;

@end
