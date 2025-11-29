@class NSMutableArray, NSIndexPath, UISwitch, NSString, UILabel, UIView, UIButton;

@interface IESLivePSCommentProtectionItemView : UITableViewCell <IESLivePSActionSheetItemViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *introductionIcon;
@property (retain, nonatomic) UIView *redDotView;
@property (retain, nonatomic) UISwitch *switchItem;
@property (retain, nonatomic) NSMutableArray *introductionLabelList;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (nonatomic) struct CGSize { double width; double height; } estimatedSize;
@property (copy, nonatomic) id /* block */ didClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchDidTap;
- (void)updateSwitchStatus:(BOOL)a0;
- (void)updateViewWithAttrTexts:(id)a0 forLevel:(int)a1;
- (void)updateViewWithHighLevel:(id)a0;
- (void)updateViewWithBaseLevel:(id)a0;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)init;
- (void)setupUI;

@end
