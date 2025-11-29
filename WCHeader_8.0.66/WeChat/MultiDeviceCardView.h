@class MultiDeviceLoginInfo, MultiDeviceManageInfo, MultiDeviceCardLoginContentView, MultiDeviceCardManageContentView;
@protocol MultiDeviceCardViewDelegate;

@interface MultiDeviceCardView : UIView

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) MultiDeviceCardLoginContentView *deviceLoginContentView;
@property (retain, nonatomic) MultiDeviceLoginInfo *deviceLoginInfo;
@property (retain, nonatomic) MultiDeviceCardManageContentView *deviceManageContentView;
@property (retain, nonatomic) MultiDeviceManageInfo *deviceManageInfo;
@property (weak, nonatomic) id<MultiDeviceCardViewDelegate> delegate;
@property (nonatomic, getter=isExpand) BOOL expand;
@property (nonatomic, getter=isSingleCard) BOOL singleCard;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)reloadView;
- (void)reset;
- (void)changeForLoginWithInfo:(id)a0;
- (id)getLoginConfirmInfo;
- (void)onLoginConfirmFailed;
- (void)changeForManageWithInfo:(id)a0;
- (void)updateFrameWithContentView:(id)a0;
- (void).cxx_destruct;

@end
