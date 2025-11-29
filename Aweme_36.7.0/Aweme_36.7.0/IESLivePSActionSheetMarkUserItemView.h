@class NSString, UISwitch, UILabel, UIButton;
@protocol IESLivePSActionSheetMarkUserItemViewDelegate;

@interface IESLivePSActionSheetMarkUserItemView : UIView <IESLivePSActionSheetItemViewProtocol>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *introductionIcon;
@property (retain, nonatomic) UISwitch *switchItem;
@property (nonatomic) double disableActionFreq;
@property (weak, nonatomic) id<IESLivePSActionSheetMarkUserItemViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ didClick;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)switchDidTap;
- (void)introductionIconDidClick;
- (void)updateSwitchStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setupUI;

@end
