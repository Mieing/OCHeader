@class NSString;

@interface AWERVLVPerformanceMonitor : NSObject

@property (nonatomic) double containerStartInitTime;
@property (nonatomic) double containerDidInitTime;
@property (nonatomic) double containerStartLoadTime;
@property (nonatomic) double containerDidLoadTime;
@property (nonatomic) double relatedVideoStartInitTime;
@property (nonatomic) double relatedVideoDidInitTime;
@property (nonatomic) double relatedVideoStartLoadTime;
@property (nonatomic) double relatedVideoDidLoadTime;
@property (nonatomic) double commentStartInitTime;
@property (nonatomic) double commentDidInitTime;
@property (nonatomic) double commentStartLoadTime;
@property (nonatomic) double commentDidLoadTime;
@property (nonatomic) double metaInfoStartLoadTime;
@property (nonatomic) double metaInfoDidLoadTime;
@property (nonatomic) double playerUpdateModelTime;
@property (nonatomic) double playerDidReadyForDisplayTime;
@property (nonatomic) double playerDidStartTime;
@property (nonatomic) double requestMetaStartTime;
@property (nonatomic) double requestMetaFinishTime;
@property (nonatomic) double requestAwemeStartTime;
@property (nonatomic) double requestAwemeFinishTime;
@property (nonatomic) double refreshAwemeTime;
@property (nonatomic) BOOL requestLongVideoAwemeHitPrefetch;
@property (nonatomic) long long videoCacheSize;
@property (nonatomic) double firstResumeTime;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *highlightEpisodeID;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) NSString *entrance;

- (void).cxx_destruct;

@end
