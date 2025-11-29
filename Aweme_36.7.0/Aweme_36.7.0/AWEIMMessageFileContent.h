@class NSString;

@interface AWEIMMessageFileContent : AWEIMMessageContent <AWEIMMessageFileContentProtocol>

@property (nonatomic) long long aweType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *format;
@property (nonatomic) long long size;
@property (copy, nonatomic) NSString *md5;
@property (retain, nonatomic) NSString *uri;
@property (retain, nonatomic) NSString *secretKey;
@property (readonly, nonatomic) unsigned long long fileType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)fileTypeForTrackWith:(id)a0;

- (void)updateMessageContentWithAttachmentMD5:(id)a0 fileType:(int)a1;
- (void)updateMessageContentWithUploadedFileResponse:(id)a0 fileType:(int)a1;
- (id)fileTypeForTrack;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentDictionary;

@end
