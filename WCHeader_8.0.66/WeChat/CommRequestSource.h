@interface CommRequestSource : WXPBGeneratedMessage

@property (nonatomic) int openScene;
@property (nonatomic) BOOL isPreHot;
@property (nonatomic) int syncType;
@property (nonatomic) int launchFlag;
@property (nonatomic) int sourceScene;

+ (void)initialize;

- (void)setSourceScene:(int)a0;
- (int)sourceScene;
- (void)setLaunchFlag:(int)a0;
- (int)launchFlag;
- (void)setSyncType:(int)a0;
- (int)syncType;
- (void)setIsPreHot:(BOOL)a0;
- (BOOL)isPreHot;
- (void)setOpenScene:(int)a0;
- (int)openScene;

@end
