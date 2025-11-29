@class NSString, EmotionFinderLinkInfo, NSData, NSMutableArray;

@interface EmoticonUploadInfoObj : MMObject <PBCoding>

@property (retain, nonatomic) NSString *uploadImgMd5;
@property (nonatomic) BOOL isUploadWxam;
@property (retain, nonatomic) NSString *tempFilePath;
@property (retain, nonatomic) NSString *attachedText;
@property (retain, nonatomic) NSString *attachedTextColor;
@property (retain, nonatomic) NSMutableArray *attachedEmojiMd5List;
@property (retain, nonatomic) NSString *followMd5;
@property (nonatomic) BOOL isSelfie;
@property (retain, nonatomic) NSString *uploadFilePath;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long failReason;
@property (nonatomic) BOOL needAsyncUpload;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) unsigned long long selfieEnterTime;
@property (nonatomic) unsigned long long selfieScene;
@property (retain, nonatomic) NSString *lensId;
@property (readonly, nonatomic) BOOL isUploadDirectly;
@property (readonly, nonatomic) unsigned long long emoticonType;
@property (nonatomic) unsigned long long uploadScene;
@property (retain, nonatomic) NSMutableArray *wordings;
@property (retain, nonatomic) EmotionFinderLinkInfo *finderSourceInfo;
@property (nonatomic) BOOL needAppendUserData;
@property (retain, nonatomic) NSData *uploadToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_uploadImgMd5;
+ (void)PBArrayAdd_isUploadWxam;
+ (void)PBArrayAdd_attachedText;
+ (void)PBArrayAdd_attachedEmojiMd5List;
+ (void)PBArrayAdd_followMd5;
+ (void)PBArrayAdd_isSelfie;
+ (void)PBArrayAdd_status;
+ (void)PBArrayAdd_failReason;
+ (void)PBArrayAdd_needAsyncUpload;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_selfieEnterTime;
+ (void)PBArrayAdd_selfieScene;
+ (void)PBArrayAdd_attachedTextColor;
+ (void)PBArrayAdd_lensId;
+ (void)PBArrayAdd_uploadScene;
+ (void)PBArrayAdd_wordings;
+ (void)initialize;

- (id)getPBPropertyTable;
- (BOOL)saveImgDataToTempPathWithImgData:(id)a0;
- (BOOL)saveImgDataToUploadPathWithImgData:(id)a0;
- (BOOL)saveImgDataToPath:(id)a0 withImgData:(id)a1;
- (id)dataOfEmoticon;
- (id)bufferWithOffset:(unsigned int)a0 maxLen:(unsigned int)a1;
- (unsigned int)totalLenOfData;
- (void).cxx_destruct;

@end
