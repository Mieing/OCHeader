@class NSURL;

@interface IESLiveKTVStreamConfig : NSObject

@property (retain, nonatomic) NSURL *musicURL;
@property (retain, nonatomic) NSURL *originURL;
@property (nonatomic) BOOL loop;
@property (nonatomic) double musicStartTime;
@property (nonatomic) unsigned long long musicType;
@property (nonatomic) unsigned long long ktvType;

+ (id)defaultConfigWithMusicURL:(id)a0;

- (id)stringForLog;
- (void).cxx_destruct;

@end
