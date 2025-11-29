@class NSString, NSArray, AWEURLModel;

@interface AWEIMEncryptedVideoContent : AWEIMMessageContent <NSCopying>

@property (nonatomic) long long captionStauts;
@property (nonatomic) BOOL isNewEncrypt;
@property (copy, nonatomic) NSString *videoId;
@property (copy, nonatomic) NSString *videoTKey;
@property (copy, nonatomic) NSString *videoSKey;
@property (copy, nonatomic) NSString *videoMD5;
@property (copy, nonatomic) NSString *posterOid;
@property (copy, nonatomic) NSString *posterSKey;
@property (copy, nonatomic) NSString *posterMD5;
@property (copy, nonatomic) NSArray *posterOriginUrlList;
@property (copy, nonatomic) NSArray *posterMediumUrlList;
@property (nonatomic) long long coverWidth;
@property (nonatomic) long long coverHeight;
@property (nonatomic) long long realWidth;
@property (nonatomic) long long realHeight;
@property (nonatomic) long long aweType;
@property (nonatomic) long long exchangeRequestSeverMessageId;
@property (nonatomic) BOOL isInfinityExchange;
@property (nonatomic) long long followBatchID;
@property (nonatomic) unsigned long long createFrom;
@property (nonatomic) long long creatType;
@property (copy, nonatomic) NSString *inlinePic;
@property (copy, nonatomic) NSString *inlineSign;
@property (nonatomic) long long duetType;
@property (nonatomic) long long duetLayout;
@property (nonatomic) long long duetRole;
@property (nonatomic) long long effectType;
@property (nonatomic) long long validRange;
@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) long long templatType;
@property (copy, nonatomic) NSString *originPosterMD5;
@property (nonatomic) double createTimestamp;
@property (copy, nonatomic) NSString *duration;
@property (copy, nonatomic) NSArray *videoTexts;
@property (copy, nonatomic) NSString *originVideoMD5;
@property (nonatomic) BOOL fromGallery;
@property (nonatomic) BOOL useOriginVideo;
@property (copy, nonatomic) NSString *firstFrameURI;
@property (nonatomic) long long postType;
@property (nonatomic) BOOL massMsg;
@property (nonatomic) long long itemId;
@property (readonly, nonatomic) AWEURLModel *posterResourceUrl;
@property (nonatomic) BOOL isAIGC;

- (void)updateMessageContentWithAttachmentMD5:(id)a0 fileType:(int)a1;
- (void)updateMessageContentWithUploadedFileResponse:(id)a0 fileType:(int)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentDictionary;

@end
