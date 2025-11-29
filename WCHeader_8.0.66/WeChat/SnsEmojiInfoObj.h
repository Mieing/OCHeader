@class NSString, EmojiInfoObj;

@interface SnsEmojiInfoObj : NSObject <NSCoding, PBCoding>

@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int size;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) int ret;
@property (nonatomic) unsigned int expiredTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_md5;
+ (void)PBArrayAdd_emojiInfoObj;
+ (void)PBArrayAdd_width;
+ (void)PBArrayAdd_height;
+ (void)PBArrayAdd_size;
+ (void)PBArrayAdd_ret;
+ (void)PBArrayAdd_expiredTime;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)initWithSnsEmojiInfo:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)getEmojiDesc;
- (id)getEmojiMd5;
- (void).cxx_destruct;

@end
