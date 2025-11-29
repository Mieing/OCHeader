@class NSString, AnchorTextInfoExtendV2, AnchorPreSeparatorV2, AnchorTextBackGroundV2, AnchorTextStyleV2;

@interface AnchorTextInfoV2 : GPBMessage

@property (copy, nonatomic) NSString *content;
@property (nonatomic) BOOL hasContent;
@property (retain, nonatomic) AnchorTextStyleV2 *textStyle;
@property (nonatomic) BOOL hasTextStyle;
@property (retain, nonatomic) AnchorTextBackGroundV2 *backGround;
@property (nonatomic) BOOL hasBackGround;
@property (retain, nonatomic) AnchorPreSeparatorV2 *preSeparator;
@property (nonatomic) BOOL hasPreSeparator;
@property (nonatomic) BOOL feedChange;
@property (nonatomic) BOOL hasFeedChange;
@property (retain, nonatomic) AnchorTextInfoExtendV2 *extend;
@property (nonatomic) BOOL hasExtend;

+ (id)descriptor;

- (id)preSeparator;
- (id)textStyle;
- (id)content;

@end
