@class NSString, WCFinderNativeDramaFeedJSParams;

@interface WCFinderNativeDramaFeedViewModelParams : NSObject

@property (nonatomic) unsigned long long dramaID;
@property (nonatomic) unsigned long long episodeID;
@property (nonatomic) int consumerMode;
@property (copy, nonatomic) NSString *sourceContentTid;
@property (nonatomic) int sourceCommentScene;
@property (retain, nonatomic) WCFinderNativeDramaFeedJSParams *jsParams;

- (void).cxx_destruct;

@end
