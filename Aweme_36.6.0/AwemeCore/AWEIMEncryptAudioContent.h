@class NSString, NSArray, AWEURLModel;

@interface AWEIMEncryptAudioContent : AWEIMMessageContent <AWEIMMessageAudioContentProtocol>

@property (copy, nonatomic) NSString *skey;
@property (copy, nonatomic) NSString *tkey;
@property (nonatomic) long long expiredTimestamp;
@property (copy, nonatomic) NSString *md5;
@property (retain, nonatomic) AWEURLModel *resourceUrl;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSArray *averagePowerArr;
@property (copy, nonatomic) NSString *contentType;
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
