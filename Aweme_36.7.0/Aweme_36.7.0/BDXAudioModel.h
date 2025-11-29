@class NSString, NSArray, NSDictionary, BDXAudioVideoModel;

@interface BDXAudioModel : NSObject

@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *albumTitle;
@property (nonatomic) double playbackDuration;
@property (copy, nonatomic) NSString *albumCoverUrl;
@property (copy, nonatomic) NSString *playUrl;
@property (copy, nonatomic) NSString *localUrl;
@property (nonatomic) BOOL canBackgroundPlay;
@property (retain, nonatomic) NSArray *localPath;
@property (retain, nonatomic) NSDictionary *eventData;
@property (nonatomic) long long playActionTimes;
@property (retain, nonatomic) BDXAudioVideoModel *playModel;

- (void).cxx_destruct;
- (BOOL)isVerified;
- (id)initWithJSONDict:(id)a0;

@end
