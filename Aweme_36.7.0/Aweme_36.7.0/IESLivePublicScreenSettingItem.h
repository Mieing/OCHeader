@class NSString;

@interface IESLivePublicScreenSettingItem : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long group;
@property (nonatomic) long long cellStyle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSString *settingText;
@property (nonatomic) BOOL switchState;
@property (nonatomic) BOOL showRedDot;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) id /* block */ tapHelpAction;
@property (copy, nonatomic) id /* block */ switchStateChanged;
@property (copy, nonatomic) id /* block */ shouldDisplay;
@property (copy, nonatomic) id /* block */ onDisplay;

- (void).cxx_destruct;

@end
