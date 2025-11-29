@class MMListenCategoryItem, MMListenMentionFeed_JumpInfo, MMListenItem, MMListenCircleXPostInfo, MMListenMentionFeedReportInfo;

@interface MMListenMentionFeed : WXPBGeneratedMessage

@property (nonatomic) unsigned int feedType;
@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) MMListenCategoryItem *categoryItem;
@property (retain, nonatomic) MMListenMentionFeed_JumpInfo *jumpInfo;
@property (retain, nonatomic) MMListenCircleXPostInfo *circlexPostInfo;
@property (retain, nonatomic) MMListenMentionFeedReportInfo *reportInfo;

+ (void)initialize;

@end
