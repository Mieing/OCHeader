@class UILabel, IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader, NSString;

@interface IESLiveInvitePanelNoramlApplyHeaderView : UIView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) IESAudienceInteractiveRootPanelLinkPaidGuidenceHeader *guidenceLabel;
@property (copy, nonatomic) id /* block */ openPaidLinkBlock;
@property (copy, nonatomic) id /* block */ closeBlock;
@property (copy, nonatomic) NSString *titleString;
@property (nonatomic) long long applyCount;
@property (nonatomic) BOOL hasLinkPaidGudience;

+ (id)headerWithOpenPaidLinkBlock:(id /* block */)a0 closeBlock:(id /* block */)a1;

- (void)setUI;
- (void)updateLabelOffset;
- (void).cxx_destruct;

@end
