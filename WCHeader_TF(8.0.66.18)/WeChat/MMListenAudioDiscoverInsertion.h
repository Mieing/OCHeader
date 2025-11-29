@class NSString, NSMutableArray, MMListenRecommendInfo;

@interface MMListenAudioDiscoverInsertion : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *categoryId;
@property (retain, nonatomic) NSMutableArray *listenItems;
@property (retain, nonatomic) MMListenRecommendInfo *recommendInfo;
@property (retain, nonatomic) NSMutableArray *mixFeedItems;

+ (void)initialize;

@end
