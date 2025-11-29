@class NSString, NSArray;

@interface GameHaowanAlbumVideoItem : MMObject

@property (retain, nonatomic) NSString *videoId;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *playUrl;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;
@property (nonatomic) unsigned long long createTimeSec;
@property (nonatomic) unsigned int durationSec;
@property (retain, nonatomic) NSString *gameName;
@property (retain, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSString *transInfo;
@property (retain, nonatomic) NSString *previewJumpUrl;
@property (retain, nonatomic) NSString *previewPreloadId;
@property (nonatomic) unsigned int previewJumpType;
@property (nonatomic) BOOL isLocalCache;

- (void).cxx_destruct;

@end
