@class CdnVideoUploadParams, NSString, CdnFileType, CdnBigfileParams, CdnFileId;

@interface CdnFileItem : WXPBGeneratedMessage

@property (retain, nonatomic) CdnFileType *type;
@property (retain, nonatomic) NSString *fullpath;
@property (retain, nonatomic) NSString *md5;
@property (retain, nonatomic) CdnFileId *fileid;
@property (retain, nonatomic) CdnVideoUploadParams *video;
@property (retain, nonatomic) CdnBigfileParams *bigfile;
@property (nonatomic) int format;

+ (void)initialize;

@end
