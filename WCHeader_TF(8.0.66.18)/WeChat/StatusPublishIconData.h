@class NSString;

@interface StatusPublishIconData : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *iconName;
@property (retain, nonatomic) NSString *iconId;
@property (retain, nonatomic) NSString *iconUrl;
@property (nonatomic) unsigned int iconOrder;
@property (nonatomic) BOOL iconKeepColor;

+ (void)initialize;

@end
