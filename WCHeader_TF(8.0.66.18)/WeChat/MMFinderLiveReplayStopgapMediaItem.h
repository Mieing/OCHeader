@class NSString;

@interface MMFinderLiveReplayStopgapMediaItem : NSObject

@property (nonatomic) unsigned long long stopgapId;
@property (nonatomic) unsigned int qualityLevel;
@property (nonatomic) unsigned int codec;
@property (retain, nonatomic) NSString *qualityTag;
@property (retain, nonatomic) NSString *uri;
@property (nonatomic) double preloadRatio;
@property (nonatomic) double preloadUnixEpochTime;
@property (readonly, nonatomic) NSString *stopgapKey;

- (void).cxx_destruct;

@end
