@class NSString, NSError, NSDictionary;

@interface AWEMVChannelPerformanceDataLinkLog : NSObject

@property (nonatomic) unsigned long long firstCardType;
@property (nonatomic) double timestampForFeedDataLoadBegin;
@property (nonatomic) double timestampForFeedDataLoadEnd;
@property (nonatomic) long long feedDataCount;
@property (copy, nonatomic) NSString *feedDataProvider;
@property (retain, nonatomic) NSError *feedDataLoadError;
@property (copy, nonatomic) NSDictionary *requestTrackParams;
@property (nonatomic) double timestampForRenderBegin;
@property (nonatomic) double timestampForRenderEnd;
@property (nonatomic) double timestampForPlayBegin;
@property (nonatomic) double timestampForPlayEnd;

- (double)durationForFeedDataLoad;
- (double)durationForRender;
- (double)durationForPlay;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isComplete;

@end
