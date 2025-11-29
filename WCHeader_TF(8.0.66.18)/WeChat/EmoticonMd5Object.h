@class NSString, EmojiInfoObj;

@interface EmoticonMd5Object : MMObject <PBCoding>

@property (nonatomic) unsigned int emojiInfoValidVersion;
@property (nonatomic) BOOL needRecoverHighPriority;
@property (retain, nonatomic) NSString *m_md5;
@property (nonatomic) unsigned int m_status;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (nonatomic) BOOL isEmojiInfoValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_m_md5;
+ (void)PBArrayAdd_m_status;
+ (void)PBArrayAdd_emojiInfoObj;
+ (void)PBArrayAdd_emojiInfoValidVersion;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (BOOL)isEmojiInfoValid;
- (void)setIsEmojiInfoValid:(BOOL)a0;
- (void).cxx_destruct;

@end
