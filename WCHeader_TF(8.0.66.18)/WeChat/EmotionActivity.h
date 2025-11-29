@class NSString, NSMutableArray;

@interface EmotionActivity : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *h5Url;
@property (nonatomic) int cacheTime;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int designerUin;
@property (retain, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *buttonDesc;
@property (retain, nonatomic) NSMutableArray *emojiMeaning;

+ (void)initialize;

@end
