@class CdnVideoUploadParams, NSString, CdnFileType, NSData, CdnBigfileParams, CdnFileId;

@interface CdnAssortedFile : WXPBGeneratedMessage

@property (retain, nonatomic) CdnFileType *type;
@property (retain, nonatomic) NSString *fullpath;
@property (retain, nonatomic) NSData *content;
@property (retain, nonatomic) NSString *midimgFullpath;
@property (retain, nonatomic) NSString *thumbFullpath;
@property (retain, nonatomic) NSData *thumbContent;
@property (retain, nonatomic) CdnFileId *fileid;
@property (retain, nonatomic) CdnVideoUploadParams *video;
@property (retain, nonatomic) CdnBigfileParams *bigfile;
@property (nonatomic) int format;

+ (void)initialize;

@end
