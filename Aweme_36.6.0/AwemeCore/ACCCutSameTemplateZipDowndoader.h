@class NSString, ACCCutSameTemplateDownloadTask;
@protocol ACCMVTemplateModelProtocol;

@interface ACCCutSameTemplateZipDowndoader : NSObject <LVTemplateZipDowndoader>

@property (weak, nonatomic) ACCCutSameTemplateDownloadTask *task;
@property (retain, nonatomic) id<ACCMVTemplateModelProtocol> templateModel;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) id /* block */ delegateCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)checkTemplateExistWithMD5:(id)a0;
+ (void)clearCache;

- (void)removeTemplateFile;
- (BOOL)checkTemplateExist;
- (void)downloadFile:(id)a0 progress:(id /* block */)a1 completion:(id /* block */)a2;
- (void)removeCache;
- (void).cxx_destruct;
- (void)cancel;

@end
