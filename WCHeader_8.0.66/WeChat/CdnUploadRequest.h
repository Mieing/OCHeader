@class CdnC2cTiledUpload, CdnBase, CdnFtnUpload, CdnBackupUpload, CdnSnsUpload, CdnC2cUpload, CdnSnsTiledUpload, CdnPipelineUpload;

@interface CdnUploadRequest : WXPBGeneratedMessage

@property (retain, nonatomic) CdnBase *base;
@property (retain, nonatomic) CdnC2cUpload *c2C;
@property (retain, nonatomic) CdnC2cTiledUpload *tiledC2C;
@property (retain, nonatomic) CdnSnsUpload *sns;
@property (retain, nonatomic) CdnSnsTiledUpload *tiledSns;
@property (retain, nonatomic) CdnFtnUpload *ftn;
@property (retain, nonatomic) CdnBackupUpload *backup;
@property (retain, nonatomic) CdnPipelineUpload *pipelineBackup;

+ (void)initialize;

@end
