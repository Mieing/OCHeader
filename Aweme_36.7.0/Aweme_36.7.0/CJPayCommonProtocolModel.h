@class UIFont, NSString, NSDictionary, NSArray, UIColor, NSNumber;

@interface CJPayCommonProtocolModel : NSObject

@property (copy, nonatomic) NSString *guideDesc;
@property (nonatomic) long long selectPattern;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) NSDictionary *groupNameDic;
@property (copy, nonatomic) NSArray *agreements;
@property (copy, nonatomic) NSArray *guideBar;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *protocolCheckBoxStr;
@property (copy, nonatomic) NSString *tailText;
@property (retain, nonatomic) UIFont *protocolFont;
@property (retain, nonatomic) UIColor *protocolColor;
@property (nonatomic) long long protocolTextAlignment;
@property (retain, nonatomic) UIColor *protocolJumpColor;
@property (retain, nonatomic) NSNumber *protocolDetailContainerHeight;
@property (nonatomic) double protocolLineHeight;
@property (nonatomic) BOOL supportRiskControl;
@property (nonatomic) BOOL isHorizontalCenterLayout;
@property (nonatomic) BOOL adaptMultiTheme;
@property (nonatomic) BOOL disableAutoCloseOnConfirm;

- (void).cxx_destruct;

@end
