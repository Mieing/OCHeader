@class NSString;

@interface MailAttachmentFileInfo : NSObject

@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSString *localPath;
@property (retain, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *attachID;
@property (nonatomic) unsigned int startPos;
@property (nonatomic) unsigned int totalSize;

- (void).cxx_destruct;

@end
