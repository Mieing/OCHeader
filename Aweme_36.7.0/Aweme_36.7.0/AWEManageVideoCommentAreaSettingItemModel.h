@class NSString;

@interface AWEManageVideoCommentAreaSettingItemModel : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *iconImageName;
@property (copy, nonatomic) NSString *svgIconImageName;
@property (copy, nonatomic) NSString *subIconImageName;
@property (nonatomic) BOOL isSwitchButton;
@property (copy, nonatomic) NSString *commentSwitchKey;
@property (copy, nonatomic) id /* block */ subIconTapped;
@property (copy, nonatomic) id /* block */ switchButtonTapped;

- (void).cxx_destruct;

@end
