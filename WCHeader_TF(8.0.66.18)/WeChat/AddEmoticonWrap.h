@class EmoticonStoreItem, NSString, EmotionFinderLinkInfo, EditEmoticonInfo, EmojiInfoObj, NSNumber, EmoticonUploadInfoObj;

@interface AddEmoticonWrap : MMObject <PBCoding>

@property (nonatomic) int source;
@property (nonatomic) BOOL showDetailWhenExchangeFailed;
@property (retain, nonatomic) NSNumber *fileType;
@property (nonatomic) long long fileSize;
@property (retain, nonatomic) NSString *thumbTempFilePath;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *fromUser;
@property (retain, nonatomic) EmojiInfoObj *emojiInfoObj;
@property (retain, nonatomic) EmoticonUploadInfoObj *uploadInfoObj;
@property (retain, nonatomic) EmoticonStoreItem *storeItem;
@property (readonly, nonatomic) BOOL isSelfieEmoticon;
@property (nonatomic) BOOL allowAddAlreadyInListEmoticons;
@property (retain, nonatomic) NSString *editSessionId;
@property (retain, nonatomic) EmotionFinderLinkInfo *finderLinkInfo;
@property (nonatomic) BOOL allowsUploadWhenExceedLimit;
@property (nonatomic) BOOL repeatedAsset;
@property (retain, nonatomic) EditEmoticonInfo *editAssetInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_source;
+ (void)PBArrayAdd_fileType;
+ (void)PBArrayAdd_fileSize;
+ (void)PBArrayAdd_thumbTempFilePath;
+ (void)PBArrayAdd_appid;
+ (void)PBArrayAdd_fromUser;
+ (void)PBArrayAdd_emojiInfoObj;
+ (void)PBArrayAdd_uploadInfoObj;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (id)initWithMessageWrap:(id)a0 AndSource:(int)a1;
- (id)getEmoticonImage;
- (void).cxx_destruct;

@end
