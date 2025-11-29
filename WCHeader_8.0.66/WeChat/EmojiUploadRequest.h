@class NSMutableArray;

@interface EmojiUploadRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *emojiItem;
@property (nonatomic) unsigned int reqTime;
@property (nonatomic) BOOL addToTop;
@property (nonatomic) unsigned int pannelType;
@property (nonatomic) unsigned int scene;
@property (nonatomic) BOOL noAddToPanel;

+ (void)initialize;

@end
