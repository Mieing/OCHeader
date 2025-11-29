@class UIColor, NSString, NSArray, NSAttributedString;

@interface AWEIMStreakPetElfInviteCardProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapOtherBlock;
@property (copy, nonatomic) id /* block */ tapButtonBlock;
@property (nonatomic) BOOL disableButtonClickInCurrentStatus;
@property (nonatomic) BOOL disableBtn;
@property (nonatomic) BOOL disableOtherClickArea;
@property (copy, nonatomic) NSAttributedString *titleStr;
@property (copy, nonatomic) NSAttributedString *subTitleStr;
@property (copy, nonatomic) NSString *btnTitleStr;
@property (retain, nonatomic) UIColor *btnTitleColor;
@property (retain, nonatomic) UIColor *btnBackgroundColor;
@property (copy, nonatomic) NSArray *iconUrlArray;

- (void).cxx_destruct;

@end
