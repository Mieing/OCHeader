@class MMListenAudioMixFeedItem, MMListenCategoryItem, NSMutableArray;

@interface MMListenAudioAuthor : WXPBGeneratedMessage

@property (retain, nonatomic) MMListenCategoryItem *category;
@property (retain, nonatomic) NSMutableArray *tabs;
@property (nonatomic) BOOL greenDot;
@property (retain, nonatomic) MMListenAudioMixFeedItem *mixFeedItem;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
