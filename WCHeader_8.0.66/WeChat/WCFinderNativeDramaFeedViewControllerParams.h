@class NSString, WCFinderNativeDramaFeedJSParams, FinderNativeDramaInfo;

@interface WCFinderNativeDramaFeedViewControllerParams : NSObject

@property (nonatomic) unsigned long long episodeID;
@property (retain, nonatomic) FinderNativeDramaInfo *info;
@property (nonatomic) BOOL popDetailOnce;
@property (copy, nonatomic) NSString *sourceContentTid;
@property (nonatomic) int sourceCommentScene;
@property (retain, nonatomic) WCFinderNativeDramaFeedJSParams *jsParams;

- (void).cxx_destruct;

@end
