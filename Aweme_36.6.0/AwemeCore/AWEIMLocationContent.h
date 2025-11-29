@class NSString, AWEURLModel;

@interface AWEIMLocationContent : AWEIMMessageContent <NSCopying, AWEIMLocationInfoProtocol>

@property (nonatomic) long long coverWidth;
@property (nonatomic) long long coverHeight;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (copy, nonatomic) NSString *poiAddress;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *poiID;
@property (copy, nonatomic) NSString *awemePoiID;
@property (retain, nonatomic) AWEURLModel *coverResourceUrl;
@property (nonatomic) unsigned long long postType;
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
