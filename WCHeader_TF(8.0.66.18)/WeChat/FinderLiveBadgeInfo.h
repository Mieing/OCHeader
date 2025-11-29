@class NSString;

@interface FinderLiveBadgeInfo : WXPBGeneratedMessage

@property (nonatomic) int badgeType;
@property (retain, nonatomic) NSString *badgeImgUrl;
@property (nonatomic) unsigned int badgeLevel;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSString *badgeName;
@property (nonatomic) unsigned int transparency;

+ (void)initialize;

@end
