@class NSString, CdnFileType, CdnVideoUploadParams;

@interface CdnSnsUpload : WXPBGeneratedMessage

@property (retain, nonatomic) CdnFileType *type;
@property (retain, nonatomic) NSString *fullpath;
@property (retain, nonatomic) NSString *thumbFullpath;
@property (retain, nonatomic) CdnVideoUploadParams *video;
@property (retain, nonatomic) NSString *emojiData;

+ (void)initialize;

@end
