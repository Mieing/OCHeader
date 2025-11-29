@class NSString, AWEURLModel;

@interface AWEIMGiphyContent : AWEIMMessageContent <NSCopying>

@property (nonatomic) long long aweType;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (copy, nonatomic) AWEURLModel *giphyURL;
@property (nonatomic) long long identifier;
@property (nonatomic) unsigned long long stickerType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *giphyName;
@property (copy, nonatomic) NSString *hintContent;
@property (copy, nonatomic) NSString *danmakuText;
@property (copy, nonatomic) NSString *danmakuID;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSString *stickerID;
@property (copy, nonatomic) NSString *emojiType;
@property (copy, nonatomic) NSString *emojiFrom;
@property (copy, nonatomic) NSString *enterMethod;

- (void)updateMessageContentWithAttachmentMD5:(id)a0 fileType:(int)a1;
- (void)updateMessageContentWithUploadedFileResponse:(id)a0 fileType:(int)a1;
- (void)updateMessageContentWithUploadedFileSize:(long long)a0 fileType:(int)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)contentDictionary;

@end
