@class UIColor, AWEUserModel;

@interface AWEMateOnboardingUserGeneralCellBusinessModel : NSObject <AWEUserListGeneralCellBusinessModelProtocol>

@property (copy, nonatomic) id /* block */ refreshBlock;
@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL isCloseFriendSection;

- (void)onDidBindToCellWithRefreshBlock:(id /* block */)a0;
- (BOOL)shouldShowRelationTag;
- (BOOL)shouldMonitorActiveStatus;
- (BOOL)shouldShowRelationButton;
- (BOOL)shouldShowMoreActionButton;
- (BOOL)shouldShowDisclosureIndicator;
- (BOOL)shouldShowCheckBox;
- (BOOL)checkBoxSelected;
- (id)checkBoxTintColor;
- (id /* block */)bigFontAutoLengthBlock;
- (id /* block */)bigFontAutoFontSizeBlock;
- (void).cxx_destruct;
- (id)cellBackgroundColor;

@end
