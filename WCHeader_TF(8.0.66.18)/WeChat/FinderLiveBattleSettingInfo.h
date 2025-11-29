@class NSString, NSMutableArray;

@interface FinderLiveBattleSettingInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *battleDuration;
@property (nonatomic) unsigned int defaultBattleDuration;
@property (retain, nonatomic) NSString *multipleTeamsBackgroundPicUrl;
@property (retain, nonatomic) NSString *twoTeamsBackgroundPicUrl;

+ (void)initialize;

@end
