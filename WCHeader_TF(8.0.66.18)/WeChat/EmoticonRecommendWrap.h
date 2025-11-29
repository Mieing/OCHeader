@class EmojiInfoObj, NSString;

@interface EmoticonRecommendWrap : MMObject <NSCopying>

@property (retain, nonatomic) EmojiInfoObj *emojiInfo;
@property (retain, nonatomic) NSString *emojiDesc;
@property (nonatomic) BOOL needPurchase;
@property (nonatomic) BOOL isFree;
@property (nonatomic) BOOL isRecentUsed;
@property (nonatomic) unsigned int emojiFrom;
@property (nonatomic) unsigned long long requestId;
@property (retain, nonatomic) NSString *emojiReason;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
