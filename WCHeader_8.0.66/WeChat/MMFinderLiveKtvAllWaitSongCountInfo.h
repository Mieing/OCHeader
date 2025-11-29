@interface MMFinderLiveKtvAllWaitSongCountInfo : NSObject

@property (nonatomic) unsigned int allWaitSongCnt;
@property (nonatomic) unsigned long long version;

+ (id)genAllWaitSongCountInfoWithWaitCnt:(unsigned int)a0 version:(unsigned long long)a1;

- (id)description;

@end
