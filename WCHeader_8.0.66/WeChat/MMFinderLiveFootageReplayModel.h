@class NSString;

@interface MMFinderLiveFootageReplayModel : NSObject

@property (retain, nonatomic) NSString *replayUri;
@property (nonatomic) unsigned int startOffset;
@property (nonatomic) unsigned int endOffset;
@property (nonatomic) BOOL rotationEnabled;
@property (nonatomic) unsigned long long replayLiveId;
@property (retain, nonatomic) NSString *replayFinderUsername;
@property (nonatomic) unsigned long long replayObjectId;
@property (retain, nonatomic) NSString *replayObjectNonceId;
@property (retain, nonatomic) NSString *reportSongId;
@property (retain, nonatomic) NSString *reportSongName;

- (void).cxx_destruct;

@end
