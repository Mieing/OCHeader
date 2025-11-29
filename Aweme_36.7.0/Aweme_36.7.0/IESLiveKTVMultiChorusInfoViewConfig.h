@class UIColor, UIFont;

@interface IESLiveKTVMultiChorusInfoViewConfig : NSObject

@property (nonatomic) int maxAvatarCount;
@property (nonatomic) int avatarWidth;
@property (nonatomic) double avatarCollapseWidth;
@property (retain, nonatomic) UIFont *totalCountFont;
@property (retain, nonatomic) UIColor *totalCountColor;
@property (retain, nonatomic) UIFont *ellipsisFont;
@property (retain, nonatomic) UIColor *ellipsisColor;

+ (id)controlBarConfig;
+ (id)defaultListConfig;

- (void).cxx_destruct;

@end
