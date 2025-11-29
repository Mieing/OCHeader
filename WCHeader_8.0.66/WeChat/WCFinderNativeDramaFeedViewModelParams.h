@class NSString, WCFinderNativeDramaFeedJSParams, FinderNativeDramaInfo;

@interface WCFinderNativeDramaFeedViewModelParams : NSObject

@property (retain, nonatomic) FinderNativeDramaInfo *info;
@property (nonatomic) unsigned long long episodeID;
@property (copy, nonatomic) NSString *sourceContentTid;
@property (nonatomic) int sourceCommentScene;
@property (retain, nonatomic) WCFinderNativeDramaFeedJSParams *jsParams;

- (void).cxx_destruct;

@end
