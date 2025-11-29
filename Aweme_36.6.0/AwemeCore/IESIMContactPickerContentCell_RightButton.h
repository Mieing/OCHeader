@class UIStackView, NSString, UIView, UIButton;

@interface IESIMContactPickerContentCell_RightButton : IESIMContactPickerContentCell <IESIMContactPickerContentCellProtocol>

@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *secondLineView;
@property (retain, nonatomic) UIStackView *secondLineStackView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithCellModel:(id)a0;
- (void)__layoutBasicViews;
- (double)centerTopContainerOffsetToRightContainer;
- (void)onRightButtonTap;
- (void).cxx_destruct;

@end
