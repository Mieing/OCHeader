@class TextStatePublishSourceInfo, NSString, UIImage, WCLocationInfo, TextStateIcon, NSArray, PrivateInfo, EmoticonUploader, TextStatePublishMediaInfo, TextStatePublishBlackListItem, EmojiInfoObj;

@interface TextStatePublishContentBuilder : NSObject <MMImageLoaderObserver>

@property (nonatomic) BOOL refetch3rdPartyBackground;
@property (readonly, nonatomic) BOOL needDownloadOrProcessExternMedia;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) UIImage *videoThumbImage;
@property (nonatomic) unsigned int editCreateTime;
@property (retain, nonatomic) NSString *editTextStateId;
@property (retain, nonatomic) NSString *followUsername;
@property (retain, nonatomic) NSString *followTextStateId;
@property (nonatomic) BOOL fetchedBlackListFromServer;
@property (nonatomic) BOOL noBlackContacts;
@property (retain, nonatomic) EmoticonUploader *emoticonUploader;
@property (retain, nonatomic) TextStateIcon *icon;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) WCLocationInfo *positionInfo;
@property (retain, nonatomic) TextStatePublishBlackListItem *blackListItem;
@property (retain, nonatomic) EmojiInfoObj *emojiInfo;
@property (retain, nonatomic) NSString *emoticonMd5;
@property (retain, nonatomic) NSString *emoticonURLString;
@property (retain, nonatomic) NSString *emoticonPath;
@property (retain, nonatomic) NSString *backgroundId;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *imagePath;
@property (retain, nonatomic) NSString *imageURLString;
@property (retain, nonatomic) NSString *videoPath;
@property (retain, nonatomic) TextStatePublishMediaInfo *mediaInfo;
@property (retain, nonatomic) TextStatePublishSourceInfo *sourceInfo;
@property (nonatomic) unsigned int visibility;
@property (retain, nonatomic) NSArray *blackContactUsernameList;
@property (retain, nonatomic) NSArray *dynamicContactTagIdList;
@property (retain, nonatomic) PrivateInfo *whiteUserInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)builderFromSourceInfo:(id)a0;
+ (id)builderFromEditingTextState:(id)a0;
+ (id)builderFromFollowingTextStateForUsername:(id)a0;
+ (void)setMediaFieldsForBuilder:(id)a0 withUsername:(id)a1 textState:(id)a2;
+ (BOOL)checkEmoticonForUploadWithData:(id)a0 checkMd5:(id)a1 acquiredImage:(id *)a2;

- (BOOL)useStatic3rdPartyMedia;
- (BOOL)prepareContentWithCompletionBlock:(id /* block */)a0;
- (BOOL)prepareBlackListWithCompletionBlock:(id /* block */)a0;
- (BOOL)prepareBackgroundWithCompletionBlock:(id /* block */)a0;
- (BOOL)prepareEmoticonWithCompletionBlock:(id /* block */)a0;
- (void)clearBackground;
- (void)privateSetImage:(id)a0;
- (void)generateLocalVideoMediaInfo;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)ImageDidFail:(id)a0;
- (void).cxx_destruct;

@end
