@class NSString, EmojiInfoObj;

@interface EmoticonMd5OcrResultInfo : NSObject <PBCoding>

@property (nonatomic) unsigned int resultVersion;
@property (nonatomic) unsigned long long lastUnsafeTime;
@property (readonly, nonatomic) BOOL isResultValid;
@property (retain, nonatomic) NSString *meaning;
@property (nonatomic) BOOL isWxamData;
@property (nonatomic) BOOL isUnsafe;
@property (readonly, nonatomic) BOOL needRecal;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_resultVersion;
+ (void)PBArrayAdd_meaning;
+ (void)PBArrayAdd_lastUnsafeTime;
+ (void)PBArrayAdd_isWxamData;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)isUnsafe;
- (void)setIsUnsafe:(BOOL)a0;
- (BOOL)isUnsafeTimeExpiredWithCurTime:(unsigned long long)a0;
- (void).cxx_destruct;

@end
