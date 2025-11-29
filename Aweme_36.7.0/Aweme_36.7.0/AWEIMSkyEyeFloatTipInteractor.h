@class AWEIMSecurityToastConfigModel, NSString, AWEIMTopSecurityTipView;
@protocol AWEIMSkyEyeFloatTipInteractorDelegate;

@interface AWEIMSkyEyeFloatTipInteractor : AWEIMComponentBase <AWEIMTopSecurityTipViewDelegate, AWEIMFloatingViewDispatchProtocol>

@property (retain, nonatomic) AWEIMSecurityToastConfigModel *config;
@property (retain, nonatomic) AWEIMTopSecurityTipView *tipView;
@property (weak, nonatomic) id<AWEIMSkyEyeFloatTipInteractorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showInFloatMode;
@property (copy, nonatomic) id /* block */ continueBlock;
@property (copy, nonatomic) id /* block */ removeBlock;
@property (nonatomic) BOOL invalid;
@property (nonatomic) unsigned long long priorityValue;

- (void)hideViewIfNeed;
- (void)showViewIfNeed;
- (id)shouldContinueForPriorityObject:(id)a0;
- (id)shouldRemoveForPriorityObject:(id)a0;
- (id)vcParent;
- (double)getMessageListVCTop;
- (struct CGSize { double x0; double x1; })getNoticeTipSize;
- (void)p_showTopView;
- (void)p_dismissTopView:(BOOL)a0;
- (void)render:(id)a0 context:(id)a1;
- (void)topSecurityTipView:(id)a0 didClickButtonModel:(id)a1;
- (void)topSecurityTipViewDidClickCloseButton:(id)a0;
- (void)topSecurityTipViewDidShowInterrupted:(id)a0;
- (BOOL)isTopViewShowing;
- (void)dismiss;
- (void).cxx_destruct;
- (id)view;

@end
