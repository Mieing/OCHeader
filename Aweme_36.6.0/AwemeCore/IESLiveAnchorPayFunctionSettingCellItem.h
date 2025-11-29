@class NSString;

@interface IESLiveAnchorPayFunctionSettingCellItem : NSObject

@property (nonatomic) long long cellType;
@property (nonatomic) BOOL switchOn;
@property (nonatomic) BOOL showSwitch;
@property (nonatomic) BOOL showArrow;
@property (nonatomic) BOOL showSubtitle;
@property (nonatomic) BOOL showSelection;
@property (nonatomic) BOOL showRedDot;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) id metaValue;
@property (nonatomic) BOOL useStandardStyle;
@property (nonatomic) BOOL shouldShowAntiFraudToast;
@property (copy, nonatomic) id /* block */ showAntiFraudToast;

- (void).cxx_destruct;

@end
