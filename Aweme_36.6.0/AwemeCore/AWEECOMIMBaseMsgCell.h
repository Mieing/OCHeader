@class AWEECOMIMBaseMsgModel, AWEECOMIMFootDescActionView, AWEECOMIMPageTrackUtil, AWEECOMIMFootDescSourceView, BDECPigeonBizPageTrackUtil, AWEECOMIMPageClickUtil, UITableView, AWEECOMIMMsgMoreItemView, UILabel, UIView, NSString, YYLabel, AWEECOMIMDetailDynamicCardManager, UIImageView;
@protocol AWEECOMIMMsgCellDelegate;

@interface AWEECOMIMBaseMsgCell : UITableViewCell <AWEECOMIMMsgMoreItemViewDelegate, AWEECOMIMFootDescActionViewDelegate, AWEECOMIMRabbiFlyClickResultProvider, AWEECOMIMMsgCellLifeCycle>

@property (retain, nonatomic) UIView *bubbleView;
@property (retain, nonatomic) UIView *locateBackgroundView;
@property (retain, nonatomic) AWEECOMIMFootDescSourceView *footDescSourceView;
@property (retain, nonatomic) AWEECOMIMMsgMoreItemView *bottomItemView;
@property (retain, nonatomic) AWEECOMIMFootDescActionView *footDescActionView;
@property (retain, nonatomic) YYLabel *riskTipsLabel;
@property (retain, nonatomic) UIView *msgIndicatorView;
@property (retain, nonatomic) UIImageView *indicatorImageView;
@property (retain, nonatomic) UILabel *indicatorLabelView;
@property (retain, nonatomic) AWEECOMIMPageTrackUtil *pageTrackUtil;
@property (retain, nonatomic) AWEECOMIMPageClickUtil *clickUtil;
@property (retain, nonatomic) BDECPigeonBizPageTrackUtil *bizPageTrackUtil;
@property (weak, nonatomic) id<AWEECOMIMMsgCellDelegate> delegate;
@property (retain, nonatomic) AWEECOMIMBaseMsgModel *cellModel;
@property (weak, nonatomic) UITableView *cellSuperView;
@property (weak, nonatomic) AWEECOMIMDetailDynamicCardManager *dynamicCardManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)messageTextExtraAreaMaxWidth;
+ (double)messageContentWidthForCellModel:(id)a0;
+ (void)getSize:(struct CGSize { double x0; double x1; } *)a0 withModel:(id)a1;
+ (double)messageContentMaxWidth;
+ (double)questionContentWidthForCellModel:(id)a0;
+ (double)contentTextRightPadding;
+ (double)contentTextLeftPadding;
+ (double)notifyContentWidth;
+ (double)avatarHeight;

- (id)visibleContentView;
- (void)didEndDisplayingCell;
- (void)didCustomInit;
- (void)msgCellMoreItemViewDidClick;
- (void)checkShowBottomMoreItemView;
- (void)setupPageTrackUtil;
- (BOOL)canTrackCellDetailDisplay;
- (void)addLongGesture;
- (BOOL)canAddLongGesture;
- (void)onLongPressV2:(id)a0;
- (void)animateLocateBackgroundView;
- (void)longPressShowMenu;
- (id)finalPopMenuItems;
- (void)trackPopMenuItemsShowWithItems:(id)a0;
- (void)trackPopMenuItemsClickWithItem:(id)a0;
- (id)originalPopMenuItems;
- (BOOL)canShowPopMenuItems;
- (BOOL)canShowMenuItemReport;
- (BOOL)canShowMenuItemForward;
- (id)footDescLocationSubType;
- (void)didClickFoldButton;
- (id)cellCommonParams;
- (id)footerTrackInfo;
- (id)otherDisplayTrackParams;
- (id)cellDetailDisplayParams;
- (void)modifyUserConfig:(int)a0 buttonName:(id)a1;
- (void)footDescActionViewDidClickSwitchHuman;
- (id)providePageTrackUtil;
- (id)provideClickResultEventName;
- (void)willDisplayByMessageVisible;
- (void)didEndDisplayingByMessageVisible;
- (void)trackCellDisplay;
- (void)trackCellDetailDisplay;
- (void)trackCellMsgReferenceDisplay;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)viewControllerWillAppear;
- (void)viewControllerDidDisappear;
- (void)willDisplayCell;

@end
