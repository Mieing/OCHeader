@class NSString, SnsEmojiInfoObj;

@interface WCTimelineEmotionCacheItem : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) SnsEmojiInfoObj *snsEmojiInfoObj;
@property (nonatomic) long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_snsEmojiInfoObj;
+ (void)PBArrayAdd_timestamp;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithMd5:(id)a0 snsEmojiInfoObj:(id)a1 isExpired:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isAvailable;
- (BOOL)isExpired;
- (void).cxx_destruct;

@end
