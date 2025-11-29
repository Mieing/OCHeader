@class NSString, NSMutableArray;

@interface GameRankSwitchInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *switchList;
@property (nonatomic) unsigned int canShowBullet;
@property (retain, nonatomic) NSString *currentGameAppid;
@property (retain, nonatomic) NSString *bulletWording;
@property (retain, nonatomic) NSString *bulletPicUrl;

+ (void)initialize;

- (void)setBulletPicUrl:(id)a0;
- (id)bulletPicUrl;
- (void)setBulletWording:(id)a0;
- (id)bulletWording;
- (void)setCurrentGameAppid:(id)a0;
- (id)currentGameAppid;
- (void)setCanShowBullet:(unsigned int)a0;
- (unsigned int)canShowBullet;
- (void)setSwitchList:(id)a0;
- (id)switchList;

@end
