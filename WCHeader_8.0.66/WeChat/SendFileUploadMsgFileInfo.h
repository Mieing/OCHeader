@class NSString;

@interface SendFileUploadMsgFileInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *fileExt;
@property (retain, nonatomic) NSString *md5;
@property (nonatomic) unsigned int totalLen;

+ (void)initialize;

@end
