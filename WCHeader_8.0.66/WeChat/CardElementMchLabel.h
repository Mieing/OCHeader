@class NSString, CardMiniAppInfo;

@interface CardElementMchLabel : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *mchLabelName;
@property (retain, nonatomic) NSString *mchLabelTextColor;
@property (retain, nonatomic) NSString *mchLabelBackColor;
@property (nonatomic) unsigned int mchLabelJumpFlag;
@property (retain, nonatomic) CardMiniAppInfo *mchLabelMiniAppInfo;
@property (nonatomic) unsigned int mchLabelBackColorAlpha;

+ (void)initialize;

@end
