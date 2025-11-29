@class NSString;

@interface C2CFileItem : NSObject

@property (nonatomic) unsigned long long fileSize;
@property (nonatomic) unsigned short fileType;
@property (nonatomic) BOOL msgIsSend;
@property (nonatomic) BOOL fileIsUpload;
@property (nonatomic) unsigned short sendFileFromScene;
@property (nonatomic) unsigned short fileSendType;
@property (nonatomic) BOOL isFromChatRoom;
@property (retain, nonatomic) NSString *fileExt;

- (id)init;
- (void).cxx_destruct;

@end
