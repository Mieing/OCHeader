@class NSString;

@interface MMFinderLiveMusicDataItem : MMLiveMusicDataItem

@property (copy, nonatomic) NSString *musicName;
@property (copy, nonatomic) NSString *musicAnchor;
@property (copy, nonatomic) NSString *albumName;
@property (copy, nonatomic) NSString *albumPicUrl;
@property (copy, nonatomic) NSString *genre;
@property (nonatomic) BOOL playable;
@property (copy, nonatomic) NSString *publicTime;
@property (nonatomic) BOOL isInBgMusicList;
@property (nonatomic) unsigned int duration;

- (id)initWithFinderLiveMusicInfo:(id)a0;
- (id)musicDurationString;
- (void).cxx_destruct;

@end
