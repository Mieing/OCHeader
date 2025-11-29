@class NSString;

@interface GameCommunityControl_AlbumInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSString *albumName;
@property (retain, nonatomic) NSString *defaultTitle;

+ (void)initialize;

- (void)setDefaultTitle:(id)a0;
- (id)defaultTitle;
- (void)setAlbumName:(id)a0;
- (id)albumName;
- (void)setGameName:(id)a0;
- (id)gameName;
- (void)setAppId:(id)a0;
- (id)appId;

@end
