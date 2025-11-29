@class SnsFinderLiveInfo, NSString;

@interface SpringFestivalConfig : WXPBGeneratedMessage

@property (nonatomic) int postStatus;
@property (nonatomic) int linkVisible;
@property (retain, nonatomic) SnsFinderLiveInfo *forceLiveInfo;
@property (nonatomic) int year;
@property (nonatomic) int joinLiveMode;
@property (nonatomic) int disableLikeBack;
@property (retain, nonatomic) NSString *springFestivalPostTipsText;
@property (retain, nonatomic) NSString *springFestivalLiveLinkText;

+ (void)initialize;

- (void)setSpringFestivalLiveLinkText:(id)a0;
- (id)springFestivalLiveLinkText;
- (void)setSpringFestivalPostTipsText:(id)a0;
- (id)springFestivalPostTipsText;
- (void)setDisableLikeBack:(int)a0;
- (int)disableLikeBack;
- (void)setJoinLiveMode:(int)a0;
- (int)joinLiveMode;
- (void)setYear:(int)a0;
- (int)year;
- (void)setForceLiveInfo:(id)a0;
- (id)forceLiveInfo;
- (void)setLinkVisible:(int)a0;
- (int)linkVisible;
- (void)setPostStatus:(int)a0;
- (int)postStatus;

@end
