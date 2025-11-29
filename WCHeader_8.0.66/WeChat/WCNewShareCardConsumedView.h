@class NSString, NSArray, UIImageView, MMUIView, UIButton, MMLoadingView, NSMutableArray, MMUILabel, WCShareCardData, UIScrollView;
@protocol WCNewShareCardConsumedViewDelegate;

@interface WCNewShareCardConsumedView : MMUIView <IWCShareCardPkgExt> {
    double _enterTimeForState;
}

@property (retain, nonatomic) NSArray *shareCardTPInfoList;
@property (retain, nonatomic) WCShareCardData *curShareCardData;
@property (retain, nonatomic) NSString *consumedBoxId;
@property (retain, nonatomic) NSString *subAppUserName;
@property (retain, nonatomic) NSString *subAppWording;
@property (retain, nonatomic) NSString *retMsg;
@property (retain, nonatomic) UIScrollView *contentView;
@property (retain, nonatomic) MMUIView *topContainerView;
@property (retain, nonatomic) MMUIView *bottomContainerView;
@property (retain, nonatomic) MMUIView *whoCanSeeContainerView;
@property (retain, nonatomic) MMUIView *shareInfoContainerView;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) UIImageView *line1ImageView;
@property (retain, nonatomic) UIImageView *line2ImageView;
@property (retain, nonatomic) MMLoadingView *loadingViewX;
@property (retain, nonatomic) MMUILabel *whoCanSeeResultLabel;
@property (nonatomic) BOOL followCheckBoxSelected;
@property (nonatomic) BOOL bIsStatusBarBlack;
@property (nonatomic) BOOL isSelectTagGroup;
@property (retain, nonatomic) NSMutableArray *arrGroupUser;
@property (retain, nonatomic) NSMutableArray *arrBlackUser;
@property (retain, nonatomic) NSMutableArray *arrGroupUserLabelID;
@property (retain, nonatomic) NSMutableArray *arrBlackUserLabelID;
@property (nonatomic) unsigned long long fromScene;
@property (weak, nonatomic) id<WCNewShareCardConsumedViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withConsumedInfo:(id)a1 consumedCardID:(id)a2 consumedBoxId:(id)a3 subscribeAppUserName:(id)a4 subscribeWording:(id)a5 fromScene:(unsigned long long)a6 retMsg:(id)a7;
- (void)showConsumedViewWithAnimation:(BOOL)a0 isStatusBarBlack:(BOOL)a1;
- (void)closeConsumedView;
- (void)layoutSubviews;
- (void)initView;
- (void)initNormalView;
- (void)initTopContainerViewWithError:(BOOL)a0;
- (void)initBottomContainerView;
- (void)initShareInfoContainerView;
- (void)initWhoCanSeeEntranceView;
- (void)onCloseBtnClicked:(id)a0;
- (void)onShareBtnClicked:(id)a0;
- (void)onAttentionBtnClicked:(id)a0;
- (void)clickWhoCanSeeBtn:(id)a0;
- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (void)stopLoading;
- (void)startLoadingWithText:(id)a0;
- (void)stopLoadingWithOKText:(id)a0;
- (void)stopLoadingWithFailText:(id)a0;
- (void)onShareCard:(id)a0 TpID:(id)a1 andCardInfo:(id)a2;
- (void).cxx_destruct;

@end
