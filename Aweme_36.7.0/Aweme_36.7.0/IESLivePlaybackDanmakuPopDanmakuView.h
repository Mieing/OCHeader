@class UIMenuItem, NSString, UIView, IESLivePlaybackDanmakuNode;
@protocol IESLivePlaybackDanmakuPopableViewProtocol;

@interface IESLivePlaybackDanmakuPopDanmakuView : UIView <IESLivePlaybackDanmakuPopupMenuDelegate>

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView<IESLivePlaybackDanmakuPopableViewProtocol> *relatedDanmakuView;
@property (retain, nonatomic) IESLivePlaybackDanmakuNode *node;
@property (retain, nonatomic) UIMenuItem *verifyItem;
@property (weak, nonatomic) UIView *hitTransferView;
@property (nonatomic) BOOL dismissed;
@property (copy, nonatomic) id /* block */ dismissCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissWithAnimated:(BOOL)a0;
- (void)refreshWithNode:(id)a0;
- (void)showPopWithMenu;
- (void)popupMenuDidHide:(id)a0;
- (void)doMenuAddAction;
- (void)doMenuReportAction;
- (void)trackPopViewWillShow;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)clean;

@end
