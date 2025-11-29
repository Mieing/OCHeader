@class NSString, MMListenItem, MMListenAudioCategoryComposedItem;

@interface MMListenAudioMixFeedItem : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (nonatomic) unsigned int itemType;
@property (retain, nonatomic) MMListenItem *listenItem;
@property (retain, nonatomic) MMListenAudioCategoryComposedItem *categoryComposedItem;
@property (nonatomic) unsigned long long statusBits;

+ (void)initialize;

@end
