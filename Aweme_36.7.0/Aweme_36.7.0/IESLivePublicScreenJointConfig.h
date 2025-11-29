@class UIColor, UIFont, NSString, UIImage;

@interface IESLivePublicScreenJointConfig : NSObject

@property (retain, nonatomic) UIColor *nameColor;
@property (retain, nonatomic) UIFont *nameFont;
@property (nonatomic) BOOL needFilterBadge;
@property (copy, nonatomic) NSString *namePrefix;
@property (copy, nonatomic) NSString *nameSuffix;
@property (copy, nonatomic) NSString *suffixString;
@property (retain, nonatomic) UIImage *userPrefixIcon;

- (void).cxx_destruct;

@end
