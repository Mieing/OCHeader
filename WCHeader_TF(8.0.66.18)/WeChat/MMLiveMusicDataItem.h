@class NSString;

@interface MMLiveMusicDataItem : NSObject

@property (nonatomic) unsigned int songId;
@property (copy, nonatomic) NSString *songPlayUrl;
@property (copy, nonatomic) NSString *listenId;
@property (nonatomic) unsigned int songtype;
@property (nonatomic) unsigned long long playId;
@property (nonatomic) unsigned long long playState;

- (id)convertToBriefMusicInfo;
- (void).cxx_destruct;

@end
