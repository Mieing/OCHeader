@class NSString;

@interface WCAccountPhoneBindGuidanceData : NSObject

@property (retain, nonatomic) NSString *guidanceTitle;
@property (retain, nonatomic) NSString *guidanceTip;
@property (retain, nonatomic) NSString *guidanceBtn;
@property (nonatomic) BOOL guidanceHideIcon;
@property (retain, nonatomic) NSString *guidanceScene;
@property (retain, nonatomic) NSString *doubleCheckContent;
@property (retain, nonatomic) NSString *doubleCheckOKText;
@property (retain, nonatomic) NSString *doubleCheckCancelText;
@property (retain, nonatomic) NSString *guidanceHelp_tips;
@property (retain, nonatomic) NSString *guidanceHelp_jumpUrl;

- (void).cxx_destruct;

@end
