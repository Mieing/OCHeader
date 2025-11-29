@class NSData, NSString;

@interface MMFinderLiveKTVSongResource : NSObject

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSData *content;
@property (nonatomic) int compressType;
@property (nonatomic) long long updateTime;
@property (retain, nonatomic) NSString *version;

- (void).cxx_destruct;

@end
