@class NSString, JumpInfo;

@interface TabCornerSetting : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *darkIconUrl;
@property (retain, nonatomic) NSString *iconColor;
@property (retain, nonatomic) NSString *darkIconColor;
@property (retain, nonatomic) JumpInfo *jumpInfo;

+ (void)initialize;

@end
