@class NSData, NSString, WCFinderNativeDramaFeedJSParams;

@interface WCFinderNativeDramaListCGIParams : NSObject

@property (nonatomic) unsigned long long dramaID;
@property (nonatomic) unsigned long long episodeID;
@property (nonatomic) unsigned long long direction;
@property (retain, nonatomic) NSData *upLastBuffer;
@property (retain, nonatomic) NSData *downLastBuffer;
@property (nonatomic) int consumerMode;
@property (copy, nonatomic) NSString *sourceContentTid;
@property (nonatomic) int sourceCommentScene;
@property (retain, nonatomic) WCFinderNativeDramaFeedJSParams *jsParams;

- (void).cxx_destruct;

@end
