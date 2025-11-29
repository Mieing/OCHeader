@class NSString, FinderPostNewLifeInfo, FinderJumpInfo, NSMutableArray, FinderObjectDesc;

@interface PostNewLifeReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) FinderObjectDesc *objectDesc;
@property (retain, nonatomic) NSMutableArray *localImgPaths;
@property (retain, nonatomic) NSMutableArray *topics;
@property (nonatomic) unsigned int enterScene;
@property (retain, nonatomic) FinderPostNewLifeInfo *info;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (retain, nonatomic) NSString *sessionId;
@property (nonatomic) unsigned int tagSource;

+ (void)initialize;

@end
