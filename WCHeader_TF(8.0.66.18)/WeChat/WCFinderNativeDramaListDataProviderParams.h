@class NSString, WCFinderNativeDramaFeedJSParams;

@interface WCFinderNativeDramaListDataProviderParams : NSObject

@property (nonatomic) unsigned long long dramaID;
@property (nonatomic) int commentScene;
@property (nonatomic) int consumerMode;
@property (copy, nonatomic) NSString *sourceContentTid;
@property (nonatomic) int sourceCommentScene;
@property (retain, nonatomic) WCFinderNativeDramaFeedJSParams *jsParams;

- (void).cxx_destruct;

@end
