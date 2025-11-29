@class RichTextView, NSString, UISwitch, MMFinderLiveTaskId, UIView, MMFinderLiveTask, MMUILabel;
@protocol MMFinderLiveGiftWallSettingViewDelegate;

@interface MMFinderLiveGiftWallSettingView : UIView <ILinkEventExt>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly, nonatomic) MMFinderLiveTask *liveTask;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) UIView *topSeparatorLine;
@property (retain, nonatomic) MMUILabel *switchTitleLabel;
@property (retain, nonatomic) UISwitch *settingSwitch;
@property (retain, nonatomic) UIView *footerSeparatorLine;
@property (retain, nonatomic) RichTextView *descLabel;
@property (weak, nonatomic) id<MMFinderLiveGiftWallSettingViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 taskId:(id)a1;
- (void)initViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onSwitchChanged:(id)a0;
- (void)setGiftWallEnabled:(BOOL)a0;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
