@class NSArray, IESLiveShowTryTimeSelectView, NSString, UIView, UILabel;

@interface IESLiveShowTryTimeView : UIView <IESLivePaidTryTimeSelectService>

@property (retain, nonatomic) UIView *tryTimeContainer;
@property (retain, nonatomic) IESLiveShowTryTimeSelectView *tryTimeSelectView;
@property (retain, nonatomic) UIView *visibleView;
@property (nonatomic) BOOL hasReceivedTryTimeSelectBlock;
@property (nonatomic) BOOL hasReceivedVisibleSelectBlock;
@property (nonatomic) unsigned long long visibleType;
@property (nonatomic) BOOL isShowNotPreviewOption;
@property (copy, nonatomic) NSArray *selectedUsers;
@property (copy, nonatomic) id /* block */ selectedPaidBlock;
@property (nonatomic) unsigned long long tryTime;
@property (retain, nonatomic) UILabel *titleForContainer;
@property (retain, nonatomic) UILabel *tryTimeTitle;
@property (retain, nonatomic) UILabel *visibleTitle;
@property (nonatomic) BOOL hasReceiveTimeSelectCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setUI;
- (id)createLiveShowTryTimeViewWithVisibleType:(unsigned long long)a0 selectedUsers:(id)a1 isShowNotPreviewOption:(BOOL)a2 diContext:(id)a3 selectedBlock:(id /* block */)a4;
- (void)initLiveShowTryTimeViewWithVisibleType:(unsigned long long)a0 selectedUsers:(id)a1 isShowNotPreviewOption:(BOOL)a2 diContext:(id)a3 selectedBlock:(id /* block */)a4;
- (void)setupVisibleView;
- (void)setupTryTimeSelectView;
- (void)timeSelectViewChangeGray;
- (void)timeSelectViewRevertToBeforeColor;
- (void).cxx_destruct;
- (void)viewWillDismiss;

@end
