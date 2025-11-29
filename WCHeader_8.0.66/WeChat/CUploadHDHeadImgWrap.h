@class NSString, NSData;

@interface CUploadHDHeadImgWrap : NSObject

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *hash;
@property (retain, nonatomic) NSString *finalMD5;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *normalData;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int totalLen;
@property (nonatomic) unsigned int eventID;
@property (nonatomic) unsigned int uiUploadEventID;
@property (nonatomic) unsigned int headType;
@property (nonatomic) int headScene;
@property (retain, nonatomic) NSString *smallUrl;
@property (retain, nonatomic) NSString *HDUrl;
@property (nonatomic) BOOL isUseCdnUpload;

- (void).cxx_destruct;

@end
