@class IESIMExternalRefContent;

@interface AWEIMMessageContent : NSObject <NSCopying>

@property (copy, nonatomic) IESIMExternalRefContent *externalRef;

- (void)updateMessageContentWithAttachmentMD5:(id)a0 fileType:(int)a1;
- (void)updateMessageContentWithUploadedFileResponse:(id)a0 fileType:(int)a1;
- (void)updateMessageContentWithUploadedFileSize:(long long)a0 fileType:(int)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentDictionary;

@end
