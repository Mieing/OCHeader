@class NSString, NSMutableArray, NSData;

@interface MusicPostTipsDetail : WXPBGeneratedMessage

@property (nonatomic) unsigned long long topicId;
@property (nonatomic) unsigned long long tingSongId;
@property (retain, nonatomic) NSString *songName;
@property (retain, nonatomic) NSMutableArray *singers;
@property (nonatomic) unsigned int durationSec;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *streamUrl;
@property (nonatomic) unsigned long long feedId;
@property (retain, nonatomic) NSData *topicInfoPassbuff;

+ (void)initialize;

- (void)setTopicInfoPassbuff:(id)a0;
- (id)topicInfoPassbuff;
- (void)setFeedId:(unsigned long long)a0;
- (unsigned long long)feedId;
- (void)setStreamUrl:(id)a0;
- (id)streamUrl;
- (void)setCoverUrl:(id)a0;
- (id)coverUrl;
- (void)setDurationSec:(unsigned int)a0;
- (unsigned int)durationSec;
- (void)setSingers:(id)a0;
- (id)singers;
- (void)setSongName:(id)a0;
- (id)songName;
- (void)setTingSongId:(unsigned long long)a0;
- (unsigned long long)tingSongId;
- (void)setTopicId:(unsigned long long)a0;
- (unsigned long long)topicId;

@end
