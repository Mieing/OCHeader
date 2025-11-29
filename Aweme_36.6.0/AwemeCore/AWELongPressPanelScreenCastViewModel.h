@class UILabel;

@interface AWELongPressPanelScreenCastViewModel : AWELongPressPanelBaseViewModel

@property (nonatomic) double lastTappedTime;
@property (retain, nonatomic) UILabel *rightTextLabel;

+ (id)longPressPanelViewModel;

- (void)showPopoverIfNeeded;
- (void)configVM;
- (id)panelBizVMIdentifier;
- (BOOL)isModern;
- (void)showRightLabelIfNeed;
- (double)getCellToScreenBottomDistance;
- (void)recordClickScreenCast;
- (BOOL)checkCanShowPopover;
- (void)recordShowPopOver;
- (BOOL)needShow;
- (void).cxx_destruct;

@end
