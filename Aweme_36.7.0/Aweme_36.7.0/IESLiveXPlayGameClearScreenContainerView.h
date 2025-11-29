@class NSLayoutConstraint, NSString, UIImageView, HTSLiveMessageListNode, UILabel, UIView, CALayer;
@protocol IESLiveXPlayGameScreenContainerViewDelegate;

@interface IESLiveXPlayGameClearScreenContainerView : UIView <HTSLiveMessageSubscriber, IESLiveMessageListCellViewDelegate, IESLiveLGameLifeCycleAction>

@property (retain, nonatomic) UIView *topInfoView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *contentTextLabel;
@property (retain, nonatomic) UIImageView *foldIconView;
@property (retain, nonatomic) UIImageView *foldView;
@property (retain, nonatomic) CALayer *foldViewMask;
@property (retain, nonatomic) UIView *countView;
@property (retain, nonatomic) UIImageView *countIconView;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *manageLabel;
@property (retain, nonatomic) UIView *dividerView;
@property (retain, nonatomic) UIView *publicScreenView;
@property (retain, nonatomic) UIView *publicScreenContentView;
@property (nonatomic) BOOL isClearScreen;
@property (nonatomic) BOOL isFoldPublicScreen;
@property (nonatomic) double publicScreenOriginHeight;
@property (nonatomic) double publicScreenOriginWidth;
@property (nonatomic) double publicScreenCurrentHeight;
@property (retain, nonatomic) NSLayoutConstraint *publicScreenContentViewTopCons;
@property (retain, nonatomic) NSLayoutConstraint *publicScreenContentViewWidthCons;
@property (retain, nonatomic) NSLayoutConstraint *publicScreenContentViewHeightCons;
@property (retain, nonatomic) NSLayoutConstraint *topInfoViewWidthCons;
@property (retain, nonatomic) NSLayoutConstraint *contentLabelLeadingCons;
@property (nonatomic) long long type;
@property (weak, nonatomic) HTSLiveMessageListNode *displayingNode;
@property (weak, nonatomic) id<IESLiveXPlayGameScreenContainerViewDelegate> delegate;
@property (copy, nonatomic) NSString *gameIconURL;
@property (nonatomic) double messageListHeight;
@property (nonatomic) double userEnterHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)touchCellWithPoint:(struct CGPoint { double x0; double x1; })a0 node:(id)a1 cell:(id)a2;
- (void)longPressCellView:(id)a0 node:(id)a1;
- (void)didNodeDisplayOnce:(id)a0;
- (void)p_panGesture:(id)a0;
- (void)app:(id)a0 orientationChange:(long long)a1;
- (void)updateClearScreenUIWithState:(BOOL)a0;
- (id)init:(BOOL)a0 type:(long long)a1;
- (void)updateFoldScreen:(BOOL)a0;
- (void)restorePublicScreenContentViewStats;
- (void)p_switchClearScreen;
- (void)p_onTapCount;
- (void)p_onTapManage;
- (void)p_switchFoldPublicScreen;
- (BOOL)shouldShowNode:(id)a0;
- (void)showNode:(id)a0;
- (void).cxx_destruct;
- (void)updateContentSize;
- (void)setupUI;
- (void)messageReceived:(id)a0;

@end
