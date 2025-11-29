@class NSString, AWEURLModel;

@interface AWEIMMessageImageContent : AWEIMMessageContent <AWEIMFoldMessageProtocol>

@property (nonatomic) long long coverWidth;
@property (nonatomic) long long coverHeight;
@property (copy, nonatomic) NSString *clientKey;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) AWEURLModel *resourceUrl;
@property (nonatomic) BOOL isFolding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateMessageContentWithAttachmentMD5:(id)a0 fileType:(int)a1;
- (void)updateMessageContentWithUploadedFileResponse:(id)a0 fileType:(int)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentDictionary;

@end
