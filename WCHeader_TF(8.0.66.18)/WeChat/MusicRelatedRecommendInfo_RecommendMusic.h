@class NSString, NSMutableArray, MMListenSimplePlayableInfo;

@interface MusicRelatedRecommendInfo_RecommendMusic : WXPBGeneratedMessage

@property (nonatomic) unsigned long long listenSongId;
@property (retain, nonatomic) NSString *musicName;
@property (retain, nonatomic) NSMutableArray *singers;
@property (retain, nonatomic) NSString *coverImageUrl;
@property (retain, nonatomic) NSString *recommendReason;
@property (retain, nonatomic) NSString *authIconUrl;
@property (retain, nonatomic) MMListenSimplePlayableInfo *playableInfo;

+ (void)initialize;

@end
