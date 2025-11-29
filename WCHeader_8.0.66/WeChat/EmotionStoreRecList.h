@class NSString, SKBuiltinBuffer_t, NSMutableArray;

@interface EmotionStoreRecList : WXPBGeneratedMessage

@property (nonatomic) unsigned int id;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *listName;
@property (retain, nonatomic) SKBuiltinBuffer_t *listBuf;
@property (nonatomic) unsigned int bannerCount;
@property (retain, nonatomic) NSMutableArray *bannerList;
@property (nonatomic) unsigned int emotionCount;
@property (retain, nonatomic) NSMutableArray *emotionList;
@property (nonatomic) unsigned int emojiRecommendCount;
@property (retain, nonatomic) NSMutableArray *emojiRecommendList;

+ (void)initialize;

@end
