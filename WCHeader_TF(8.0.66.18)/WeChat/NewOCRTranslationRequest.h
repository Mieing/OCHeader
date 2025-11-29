@class BaseRequest, NSData, NSString;

@interface NewOCRTranslationRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int sessionId;
@property (nonatomic) unsigned int imageSize;
@property (retain, nonatomic) NSData *imageData;
@property (nonatomic) unsigned int imageDataOffset;
@property (retain, nonatomic) NSData *ctx;
@property (retain, nonatomic) NSString *imageUrl;
@property (retain, nonatomic) NSString *imageFileId;
@property (retain, nonatomic) NSString *imageAeskey;
@property (nonatomic) unsigned int scene;
@property (nonatomic) unsigned int imageColor;
@property (nonatomic) unsigned int imageSource;

+ (void)initialize;

@end
