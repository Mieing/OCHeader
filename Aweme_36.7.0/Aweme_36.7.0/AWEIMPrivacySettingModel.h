@class NSString;

@interface AWEIMPrivacySettingModel : NSObject

@property (nonatomic) long long type;
@property (nonatomic) long long settingType;
@property (copy, nonatomic) id /* block */ switchBlock;
@property (copy, nonatomic) id /* block */ selectCellBlock;
@property (copy, nonatomic) id /* block */ cellRefreshBlock;
@property (copy, nonatomic) NSString *tip;
@property (nonatomic) BOOL isOn;
@property (copy, nonatomic) NSString *selectTip;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) BOOL shouldChooseBeforeChange;
@property (copy, nonatomic) id /* block */ chooseBeforeSwitchBlock;
@property (copy, nonatomic) NSString *attributedLinkKey;
@property (copy, nonatomic) NSString *attributedLink;
@property (copy, nonatomic) NSString *uniqueIDString;
@property (nonatomic) BOOL allowDividingLine;
@property (copy, nonatomic) NSString *iconString;
@property (copy, nonatomic) NSString *svgIconImageName;
@property (retain, nonatomic) NSString *iconSearchBundleName;
@property (nonatomic) BOOL isDataException;

- (void).cxx_destruct;

@end
