@interface MMFinderLiveKtvSelfWaitSongCountInfo : NSObject

@property (nonatomic) unsigned int selfWaitSongCnt;
@property (nonatomic) unsigned long long version;

+ (id)genSelfWaitSongCountInfoWithWaitCnt:(unsigned int)a0 version:(unsigned long long)a1;

- (id)description;

@end
