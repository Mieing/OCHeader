@interface OCRTransCdnUploadContext : NSObject

@property (nonatomic) unsigned int cgiType;
@property (nonatomic) unsigned int sessionId32;
@property (nonatomic) unsigned long long sessionId64;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int imageDataLength;
@property (nonatomic) unsigned int cdnEventID;

@end
