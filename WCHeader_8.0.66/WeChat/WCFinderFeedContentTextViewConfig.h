@class UIFont, NSString, NSArray, UIColor, NSNumber;

@interface WCFinderFeedContentTextViewConfig : NSObject

@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *prefix;
@property (retain, nonatomic) NSArray *prefixViewArray;
@property (copy, nonatomic) NSString *linkText;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *linkColor;
@property (nonatomic) double width;
@property (nonatomic) double lineSpacing;
@property (nonatomic) double rightIconPadding;
@property (nonatomic) BOOL isForceExpand;
@property (nonatomic) unsigned long long unExpandLineNum;
@property (nonatomic) BOOL hideExpandButton;
@property (nonatomic) BOOL forbidLinkClickAction;
@property (retain, nonatomic) NSArray *suffixViewArr;
@property (retain, nonatomic) NSNumber *suffixViewMargin;
@property (nonatomic) unsigned long long suffixType;
@property (nonatomic) unsigned long long suffixUIStyleType;
@property (retain, nonatomic) UIColor *suffixGradientColor;
@property (nonatomic) BOOL useGradientSuffix;
@property (nonatomic) double firstLineOriginX;
@property (nonatomic) BOOL extendSuffixMaskViewEdges;

+ (id)defaultConfig;
+ (unsigned long long)getCurSuffixUIStyleTypeIncludeXLabSwitch:(BOOL)a0;

- (id)init;
- (void).cxx_destruct;

@end
