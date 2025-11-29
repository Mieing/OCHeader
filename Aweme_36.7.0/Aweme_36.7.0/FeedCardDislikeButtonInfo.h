@class NSString;

@interface FeedCardDislikeButtonInfo : GPBMessage

@property (copy, nonatomic) NSString *bgColor;
@property (nonatomic) BOOL hasBgColor;
@property (copy, nonatomic) NSString *color;
@property (nonatomic) BOOL hasColor;
@property (nonatomic) BOOL needShow;
@property (nonatomic) BOOL hasNeedShow;
@property (copy, nonatomic) NSString *iconSvg;
@property (nonatomic) BOOL hasIconSvg;
@property (copy, nonatomic) NSString *borderWidth;
@property (nonatomic) BOOL hasBorderWidth;
@property (copy, nonatomic) NSString *borderColor;
@property (nonatomic) BOOL hasBorderColor;

+ (id)descriptor;

@end
