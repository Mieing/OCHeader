@class BaseRequest, NSString, EmotionFinderLinkInfo, NSMutableArray, UploadUGCFinderInfo;

@interface UploadEmojiPrepareRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) BOOL isWxam;
@property (nonatomic) BOOL isSelfie;
@property (retain, nonatomic) NSMutableArray *attachedEmojiMd5List;
@property (retain, nonatomic) NSString *attachedText;
@property (retain, nonatomic) NSString *followingEmojiMd5;
@property (retain, nonatomic) NSString *lensId;
@property (retain, nonatomic) NSString *attachedTextColor;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSMutableArray *wordings;
@property (nonatomic) unsigned int uploadScene;
@property (retain, nonatomic) UploadUGCFinderInfo *ugcfinderInfo;
@property (retain, nonatomic) NSMutableArray *meanings;
@property (retain, nonatomic) EmotionFinderLinkInfo *finderLinkInfo;

+ (void)initialize;

@end
